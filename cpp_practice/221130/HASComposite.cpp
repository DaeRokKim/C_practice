#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
   int bullet;

public:
   Gun(int bnum) : bullet(bnum) {}

   void Shut()
   {
      cout << "BANG!" << endl;
      bullet--;
   }
};

class Police
{
private:
   int handcuffs;
   Gun *pistol;

public:
   Police(int bnum, int bcuff) : handcuffs(bcuff)
   {
      if (bnum > 0)
      {
         pistol = new Gun(bnum);
      }
      else
      {
         pistol = NULL;
      }
   }

   void PutHandcuff()
   {
      cout << "SNAP!" << endl;
      handcuffs--;
   }

   void Shut()
   {
      if (pistol == NULL)
      {
         cout << "Hut BANG!" << endl;
      }
      else
      {
         pistol->Shut();
      }
   }

   ~Police()
   {
      if (pistol != NULL)
      {
         delete pistol;
      }
   }
};

int main()
{
   Police pman1(5, 3);
   pman1.Shut();
   pman1.PutHandcuff();

   Police pman2(0, 3);
   pman2.Shut();
   pman2.PutHandcuff();

   return 0;
}