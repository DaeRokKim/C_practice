#include <iostream>
using namespace std;

class Point
{
private:
   int xpos, ypos;

public:
   Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}

   void ShowPosition()
   {
      cout << '[' << xpos << ", " << ypos << ']' << endl;
   }

   Point &operator+=(const Point &ref)
   {
      xpos += ref.xpos;
      ypos += ref.ypos;

      return *this;
   }

   Point &operator-=(const Point &ref)
   {
      xpos -= ref.xpos;
      ypos -= ref.ypos;

      return *this;
   }
};

int main()
{
   Point pos1(24, 17);
   Point pos2(5, 4);
   Point pos3(5, 4);

   (pos1 += pos2).ShowPosition();
   (pos1 -= pos2).ShowPosition();

   return 0;
}