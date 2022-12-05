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

   friend bool operator==(const Point &pos1, const Point &pos2);
   friend bool operator!=(const Point &pos1, const Point &pos2);
};

bool operator==(const Point &pos1, const Point &pos2)
{
   if (pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos)
   {
      return true;
   }
   else
   {
      return false;
   }
}

bool operator!=(const Point &pos1, const Point &pos2)
{
   return !(pos1 == pos2);
}

int main()
{
   Point pos1(24, 17);
   Point pos2(5, 4);
   Point pos3(5, 4);

   if (pos2 == pos3)
   {
      cout << "equal" << endl;
   }
   else
   {
      cout << "not equal" << endl;
   }

   if (pos1 != pos3)
   {
      cout << "not equal" << endl;
   }
   else
   {
      cout << "equal" << endl;
   }

   return 0;
}