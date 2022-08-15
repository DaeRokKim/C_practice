#include <iostream>
using namespace std;

int main()
{
  string a = "abcde";

  cout << a.find('a') << endl;
  cout << a.find('b') << endl;
  cout << a.find('c') << endl;
  cout << a.find('d') << endl;
  cout << a.find('e') << endl;
  cout << a.find('f') << endl;
  cout << a.find('g') << endl;
  cout << (int)a.find('f') << endl;
  cout << (int)a.find('g') << endl;

  return 0;
}

/*
결과값
0
1
2
3
4
18446744073709551615
18446744073709551615
 */
