#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
   int len;
   char *str;

public:
   String();
   String(const char *c);
   String(const String &ref);
   ~String();
   String &operator=(const String &ref);
   String &operator+=(const String &ref);
   bool operator==(const String &ref);
   String operator+(const String &ref);

   friend ostream &operator<<(ostream &os, const String &ref);
   friend istream &operator>>(istream &is, String &ref);
};

String::String()
{
   len = 0;
   str = NULL;
}

String::String(const char *c)
{
   len = strlen(c) + 1;
   str = new char[len];
   strcpy(str, c);
}

String::String(const String &ref)
{
   len = ref.len;
   str = new char[len];
   strcpy(str, ref.str);
}

String &String::operator=(const String &ref)
{
   if (str != NULL)
   {
      delete[] str;
   }
   len = ref.len;
   str = new char[len];
   strcpy(str, ref.str);
   return *this;
}

String &String::operator+=(const String &ref)
{
   len += (ref.len - 1);
   char *tempstr = new char[len];
   strcpy(tempstr, str);
   strcat(tempstr, ref.str);

   if (str != NULL)
   {
      delete[] str;
   }

   str = tempstr;
   return *this;
}

bool String::operator==(const String &ref)
{
   return strcmp(str, ref.str) ? false : true;
}

String String::operator+(const String &ref)
{
   char *tempstr = new char[len + ref.len - 1];
   strcpy(tempstr, str);
   strcat(tempstr, ref.str);

   String temp(tempstr);
   delete[] tempstr;

   return temp;
}

String::~String()
{
   if (str != NULL)
   {
      delete[] str;
   }
}

ostream &operator<<(ostream &os, const String &ref)
{
   os << ref.str;

   return os;
}

istream &operator>>(istream &is, String &ref)
{
   char str[100];
   is >> str;
   ref = String(str);

   return is;
}

int main()
{
   String str1 = "I like ";
   String str2 = "string class";
   String str3 = str1 + str2;

   cout << str1 << endl;
   cout << str2 << endl;
   cout << str3 << endl;

   str1 += str2;
   if (str1 == str3)
      cout << "동일 문자열!" << endl;
   else
      cout << "동일하지 않은 문자열!" << endl;

   String str4;
   cout << "문자열 입력: ";
   cin >> str4;
   cout << "입력한 문자열: " << str4 << endl;
   return 0;
}