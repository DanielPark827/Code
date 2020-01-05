#ifndef __스택기반계산기__
#define __스택기반계산기__

#include "연결 리스트 활용 스택.h"
//중위에서 후위표기법

int GetOpPrec(char op) {
	switch (op)
	{
	case '*':
	case '/':
		return 5;
	case'+':
	case '-':
		return 3;
	case '(':
		return 1;
	}

	return -1;
}

int WhoPrecOp(char op1, char op2)
{
	int op1Prec = GetOpPrec(op1);
	int op2Prec = GetOpPrec(op2);

	if (op1Prec > op2Prec)
		return 1;
	else if (op1Prec < op2Prec)
		return -1;
	else
		return 0;
}

void convToRPNExp(char exp[]) {
	Stack stack;
	int expLen = strlen(exp);
	char * convExp = new char[expLen + 1];

	int idx = 0;
	char tok, popOp;

	memset(convExp, 0, sizeof(char)*expLen + 1);

	for (int i = 0; i < expLen; i++) {
		tok = exp[i];
		if (isdigit(tok)) {
			convExp[idx++] = tok;
		}
		else {
			switch (tok)
			{
			case '(':
				stack.SPush(tok);
				break;
			case ')':
				while (true) {
					popOp = stack.SPop();
					if (popOp == '(')
						break;
					convExp[idx++] = popOp;
				}
				break;
			case '+': case '-':
			case '*': case '/':
				while (!stack.SIsEmpty() && WhoPrecOp(stack.SPeek(), tok) >= 0)
					convExp[idx++] = stack.SPop();

				stack.SPush(tok);
				break;
			}

		}
	}

	while (!stack.SIsEmpty())
		convExp[idx++] = stack.SPop();

	strcpy(exp, convExp);
	delete convExp;
}

//후위표기법 계산
int EvalRPNExp(char exp[])
{
	Stack stack;
	int expLen = strlen(exp);
	char tok, op1, op2;

	for (int i = 0; i < expLen; i++) {
		tok = exp[i];

		if (isdigit(tok))
		{
			stack.SPush(tok - '0');
		}
		else
		{
			op2 = stack.SPop();
			op1 = stack.SPop();

			switch (tok)
			{
			case '+':
				stack.SPush(op1 + op2);
				break;
			case '-':
				stack.SPush(op1 - op2);
				break;
			case '*':
				stack.SPush(op1 * op2);
				break;
			case '/':
				stack.SPush(op1 / op2);
				break;
			}
		}
	}
	return stack.SPop();
}

int EvalInfixExp(char exp[])
{
	int len = strlen(exp);
	int ret;
	char* expcpy = new char[len + 1];
	strcpy(expcpy, exp);

	convToRPNExp(expcpy);
	ret = EvalRPNExp(expcpy);

	delete expcpy;
	return ret;
}
#endif // !__스택기반계산기__
