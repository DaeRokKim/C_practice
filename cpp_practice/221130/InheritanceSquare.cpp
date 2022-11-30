#include <iostream>
using namespace std;

class Rectangle
{
private:
   int height;
   int width;

public:
   Rectangle(int h, int w) : height(h), width(w) {}

   void ShowAreaInfo()
   {
      cout << "면적 : " << height * width << endl;
   }
};

class Square : public Rectangle
{
private:
   int length;

public:
   Square(int len) : Rectangle(len, len), length(len) {}
};

int main()
{
   Rectangle rec(4, 3);
   rec.ShowAreaInfo();

   Square sqr(7);
   sqr.ShowAreaInfo();

   return 0;
}