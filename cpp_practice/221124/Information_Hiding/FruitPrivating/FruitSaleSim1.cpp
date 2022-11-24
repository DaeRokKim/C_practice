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
      if (num <= 0)
      {
         cout << "최소 수량을 만족하지 못했습니다. 최소 1개이상 구매해야합니다." << '\n'
              << endl;
         return 0;
      }

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
   buyer.BuyApples(seller, 0);
   buyer.BuyApples(seller, 2000);

   cout << "과일 판매자 현황" << endl;
   seller.ShowSaleResult();
   cout << "과일 구매자 현황" << endl;
   buyer.ShowBuyResult();

   return 0;
}