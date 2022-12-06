#include <iostream>
using namespace std;

class Point
{
private:
   int xpos, ypos;

public:
   Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
   void ShowPosition() const
   {
      cout << '[' << xpos << ", " << ypos << ']' << endl;
   }

   Point &operator-()
   {
      xpos *= -1;
      ypos *= -1;
      return *this;
   }

   friend Point &operator~(Point &ref);
};

Point &operator~(Point &ref)
{
   int temp = ref.xpos;
   ref.xpos = ref.ypos;
   ref.ypos = temp;
   return ref;
}

int main()
{
   Point pos1(1, 2);
   pos1.ShowPosition();

   Point pos2 = -pos1;
   pos2.ShowPosition();

   Point pos3(5, 6);
   pos3.ShowPosition();

   Point pos4 = ~pos3;
   pos4.ShowPosition();

   return 0;
}