#include <iostream>
using namespace std;

class FruitSeller
{
private:
   int APPLE_PRICE;
   int numOfApple;
   int myMoney;

public:
   void InitMembers(int price, int num, int money)
   {
      APPLE_PRICE = price;
      numOfApple = num;
      myMoney = money;
   }

   int SaleApples(int money)
   {
      int num = money / APPLE_PRICE;
      numOfApple -= num;
      myMoney += money;
      return num;
   }

   void ShowSaleResult()
   {
      cout << "남은 사과: " << numOfApple << endl;
      cout << "판매 수익: " << myMoney << '\n'
           << endl;
   }
};

class FruitBuyer
{
   int numOfApples;
   int myMoney;

public:
   void InitMembers(int money)
   {
      myMoney = money;
      numOfApples = 0;
   }

   void BuyApples(FruitSeller &seller, int money)
   {
      numOfApples += seller.SaleApples(money);
      myMoney -= money;
   }

   void ShowBuyResult()
   {
      cout << "현재 잔액: " << myMoney << endl;
      cout << "사과 개수: " << numOfApples << '\n'
           << endl;
   }
};

int main()
{
   FruitSeller seller;
   FruitBuyer buyer;

   seller.InitMembers(1000, 20, 0);
   buyer.InitMembers(5000);
   buyer.BuyApples(seller, 2000);

   cout << "과일 판매자 현황" << endl;
   seller.ShowSaleResult();
   cout << "과일 구매자 현황" << endl;
   buyer.ShowBuyResult();

   return 0;
}