#include <stdio.h>



int main(void) {

	int alpha[26] = { 0, };

	int i;

	int ch;

	int max = 0;

	int n;

	for (i = 0; i <= 5000; i++) {

		ch = getchar();

		if (ch >= 'a' && ch <= 'z') {

			alpha[ch - 'a']++;

		}

	}

	max = alpha[0];

	for (i = 1; i < 26; i++) {

		if (max < alpha[i]) {

			max = alpha[i];

		}

	}

	for (i = 0; i < 26; i++) {

		if (alpha[i] == max) {

			printf("%c", i + 'a');

		}

	}



	return 0;

}