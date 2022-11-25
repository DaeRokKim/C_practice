#include <iostream>
using namespace std;

class Point
{
private:
   int xpos, ypos;

public:
   Point(int x, int y) : xpos(x), ypos(y) {}

   void ShowPointInfo() const
   {
      cout << "[" << xpos << ", " << ypos << "]" << endl;
   }
};

class Circle
{
private:
   Point dot;
   int rad;

public:
   Circle(int x, int y, int r) : dot(x, y)
   {
      rad = r;
   }

   void ShowCircleInfo() const
   {
      cout << "radius: " << rad << endl;
      dot.ShowPointInfo();
   }
};

class Ring
{
private:
   Circle cir1;
   Circle cir2;

public:
   Ring(int x1, int y1, int r1, int x2, int y2, int r2) : cir1(x1, y1, r1), cir2(x2, y2, r2) {}

   void ShowRingInfo()
   {
      cout << "Inner Circle Info..." << endl;
      cir1.ShowCircleInfo();

      cout << "\nOutter Circle Info..." << endl;
      cir2.ShowCircleInfo();
   }
};

int main()
{
   Ring ring(1, 1, 4, 2, 2, 9);
   ring.ShowRingInfo();

   return 0;
}