#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
   int bullet;

public:
   Gun(int bnum) : bullet(bnum){};

   void Shut()
   {
      cout << "BANG" << endl;
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
      cout << "SNAP" << endl;
      handcuffs--;
   }

   void Shut()
   {
      if (pistol == NULL)
      {
         cout << "BOOL_BAL" << endl;
      }
      else
      {
         pistol->Shut();
      }
   }

   Police(const Police &copy) : handcuffs(copy.handcuffs)
   {
      pistol = new Gun(*(copy.pistol));
   }

   Police &operator=(const Police &ref)
   {
      if (pistol != NULL)
      {
         delete pistol;
      }
      handcuffs = ref.handcuffs;
      pistol = new Gun(*(ref.pistol));

      return *this;
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
   Police pman2 = pman1;
   pman2.PutHandcuff();
   pman2.Shut();

   Police pman3(0, 3);
   pman3 = pman1;
   pman3.PutHandcuff();
   pman3.Shut();

   return 0;
}