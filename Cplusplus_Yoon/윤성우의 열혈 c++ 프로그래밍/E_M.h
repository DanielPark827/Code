#ifndef __E_M_H__
#define __E_M_H__

class Employee
{
	char name[100];
public:
	Employee(const char * name)
	{
		strcpy(this->name, name);
	}
	virtual int GetPay() const = 0;
	virtual void ShowSalaryInfo() = 0;
	void ShowYourName() const
	{
		cout << name << endl;
	}
};

class TemporaryWorker : public Employee
{
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(const char * name, int pay) : Employee(name), workTime(0), payPerHour(pay) {}
	void AddWorkTime(int time)
	{
		workTime += time;
	}
	int GetPay() const { return workTime * payPerHour; }
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << GetPay() << endl << endl;
	}
};

class PermanentWorker : public Employee
{
	int salary;
public:
	PermanentWorker(const char * name, int money) : salary{ money }, Employee{name}
	{}
	int GetPay() const { return salary; }
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << salary << endl;
	}
};

class SalesWorker : public PermanentWorker
{
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(const char * name, int money, double raio) : PermanentWorker{name,money}, salesResult{0}, bonusRatio{0} {}
	void AddSalesResult(int value) { salesResult += value; }
	int GetPay() const
	{
		return PermanentWorker::GetPay() + (int)(salesResult*bonusRatio);
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << GetPay() << endl << endl;
	}
};

class EmployeeHandler
{
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler() : empNum(0) {}
	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
		{
			empList[i]->ShowSalaryInfo();
		}
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
		{
			sum += empList[i]->GetPay();
		}
		cout << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
		{
			delete empList[i];
		}
	}
};

#endif