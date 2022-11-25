#include <iostream>
using namespace std;

class FruitSeller
{
private:
   const int APPLE_PRICE;
   int numOfApples;
   int myMoney;

public:
   FruitSeller(int price, int num, int money) : APPLE_PRICE(price), numOfApples(num), myMoney(money)
   {
   }

   int SaleApples(int money)
   {
      if (money <= 0)
      {
         cout << "최소 주문 수량에 맞춰라" << endl;
         return 0;
      }
      int num = money / APPLE_PRICE;
      numOfApples -= num;
      myMoney += money;

      return num;
   }

   void ShowSaleResult() const
   {
      cout << "판매 후 잔액 : " << myMoney << endl;
      cout << "잔여 사과 : " << numOfApples << '\n'
           << endl;
   }
};

class FruitBuyer
{
private:
   int myMoney;
   int numOfApples;

public:
   FruitBuyer(int money) : myMoney(money), numOfApples(0)
   {
   }
   void BuyApples(FruitSeller &seller, int money)
   {
      numOfApples += seller.SaleApples(money);
      myMoney -= money;
   }

   void ShowBuyResult() const
   {
      cout << "구매한 사과 개수 : " << numOfApples << endl;
      cout << "남은 돈 : " << myMoney << '\n'
           << endl;
   }
};

int main()
{
   FruitSeller seller(1000, 20, 0);
   FruitBuyer buyer(5000);
   buyer.BuyApples(seller, 2000);

   seller.ShowSaleResult();
   buyer.ShowBuyResult();

   return 0;
}