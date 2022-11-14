#include <iostream>
using namespace std;

void ShowMenu();
void MakeAccount();
void DepositMoney();
void WithdrawMoney();
void ShowAllAcountInfo();

int main()
{

   return 0;
}

void ShowMenu()
{
   cout << "-----Menu-----" << '\n';
   cout << "1. 계좌개설" << '\n';
   cout << "2. 입 금" << '\n';
   cout << "3. 출 금" << '\n';
   cout << "4. 계좌정보 전체 출력" << '\n';
   cout << "5. 프로그램 종료" << '\n';
   cout << "선택 : " << '\n';
}

void MakeAccount()
{
   cout << "[계좌개설]" << '\n';
   cout << "계좌ID : " << '\n';
   cout << "이 름 : " << '\n';
   cout << "입금액 : " << '\n';
}

void DepositMoney()
{
   cout << "계좌ID : " << '\n';
   cout << "입금액 : " << '\n';
   cout << "입금완료" << '\n';
}

void WithdrawMoney()
{
   cout << "계좌ID : " << '\n';
   cout << "출금액 : " << '\n';
   cout << "출금완료 : " << '\n';
}

void ShowAllAccountInfo()
{
   cout << "계좌ID : " << '\n';
   cout << "이 름 : " << '\n';
   cout << "잔 액 : " << '\n';
}
