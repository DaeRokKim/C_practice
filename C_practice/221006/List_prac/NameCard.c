#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NameCard.h"

NameCard *MakeNameCard(const char *name, const char *phone)
{
   NameCard *pcard = (NameCard *)malloc(sizeof(NameCard));
   // *pcard->name = &name;
   // *pcard->phone = &phone;
   strcpy(pcard->name, name);
   strcpy(pcard->phone, phone);

   return pcard;
}

void ShowNameCardInfo(NameCard *pcard)
{
   printf("이름 : %s \n", pcard->name);
   printf("번호 : %s \n", pcard->phone);
}

int NameCompare(NameCard *pcard, const char *name)
{
   return strcmp(pcard->name, name);
}

void ChangePhoneNum(NameCard *pcard, const char *phone)
{
   strcpy(pcard->phone, phone);
}
