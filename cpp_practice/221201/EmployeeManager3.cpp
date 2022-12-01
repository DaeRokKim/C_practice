#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
   char name[100];

public:
   Employee(char *name)
   {
      strcpy(this->name, name);
   }
   void ShowYourName() const
   {
      cout << "name : " << name << endl;
   }
};

class PermanentWorker : public Employee
{
private:
   int salary; // 급여
public:
   PermanentWorker(char *name, int money) : Employee(name), salary(money) {}
   int GetPay() const
   {
      return salary;
   }
   void ShowSalaryInfo() const
   {
      ShowYourName();
      cout << "salary : " << GetPay() << endl
           << endl;
   }
};

class TemporaryWorker : public Employee
{
private:
   int workTime;
   int PayPerHour;

public:
   TemporaryWorker(char *name, int pay) : Employee(name), workTime(0), PayPerHour(pay) {}

   void AddWorkTime(int time)
   {
      workTime += time;
   }

   int GetPay() const
   {
      return workTime * PayPerHour;
   }

   void ShowSalaryInof() const
   {
      ShowSalaryInof();
      cout << "salary : " << GetPay() << endl
           << endl;
   }
};

class SalesWorker : public PermanentWorker
{
private:
   int salesResult;
   double bonusRatio;

public:
   SalesWorker(char *name, int money, double ratio) : PermanentWorker(name, money), bonusRatio(ratio), salesResult(0) {}

   void AddSalesResult(int value)
   {
      salesResult += value;
   }

   int GetPay() const
   {
      return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
   }

   void ShowSalaryInfo() const
   {
      ShowYourName();
      cout << "salary : " << GetPay() << endl
           << endl;
   }
};

class EmployeeHandler
{
private:
   Employee *empList[50];
   int empNum;

public:
   EmployeeHandler() : empNum(0) {}
   void AddEmployee(Employee *emp)
   {
      empList[empNum++] = emp;
   }
   void ShowAllSalaryInfo() const
   {
      /*
      for(int i=0; i<empNum; i++) {
         empList[i]->ShowSalaryInfo();
      }
      */
   }

   void ShowTotalSalary() const
   {
      int sum = 0;
      /*
      for(int i=0; i<empNum; i++) {
         sum += empList[i]->GetPay();
      }
      */
      cout << "salary sum : " << sum << endl;
   }

   ~EmployeeHandler()
   {
      for (int i = 0; i < empNum; i++)
      {
         delete empList[i];
      }
   }
};

int main()
{
   EmployeeHandler handler;

   // 정규직 등록
   handler.AddEmployee(new PermanentWorker("Kim", 1000));
   handler.AddEmployee(new PermanentWorker("Lee", 1500));

   // 임시직 등록
   TemporaryWorker *alba = new TemporaryWorker("Jung", 700);
   alba->AddWorkTime(5);
   handler.AddEmployee(alba);

   // 영업직 등록
   SalesWorker *seller = new SalesWorker("Hong", 1000, 0.1);
   seller->AddSalesResult(7000);
   handler.AddEmployee(seller);

   // 이번 달에 지불해야할 급여의 정보
   handler.ShowAllSalaryInfo();

   // 이번 달에 지불해야할 급여의 총합
   handler.ShowTotalSalary();

   return 0;
}