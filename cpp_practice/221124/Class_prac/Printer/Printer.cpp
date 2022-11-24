#include <iostream>
#include <cstring>
#include "Printer.h"
using namespace std;

void Printer::SetString(char *ch)
{
   strcpy(str, ch);
}

void Printer::ShowString()
{
   cout << str << endl;
}
