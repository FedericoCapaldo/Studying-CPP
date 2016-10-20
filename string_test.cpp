#include "String.h"
#include <iostream>
using namespace std;



int main() {
  String s("zzzzzz");
  String t("luck");
  String p("elele");

  cout << s.size() << endl;
  s = t;
  cout << s.size() << endl;

  // s.indexOf('b');
  cout << s[4] << endl;
  // String x(s.reverse());
  // cout << x[0] << endl;
  // cout << x[1] << endl;
  // cout << x[2] << endl;
  // cout << x[3] << endl;

  s += s;
  cout << s.size() << endl;
  cout << s << endl;

  cout << s+p << endl;

  bool b = p == p;
  cout << b << endl;

  bool b2 = p != p;
  cout << b2 << endl;

  cout << "~~~~~~~~~~" << endl;
  String str1("a");
  String str2("b");
  bool bx1 = str2 > str1;
  bool bx2 = str2 < str1;

  bool bx3 = str1 > str1;
  bool bx4 = str1 < str1;
  bool bx5 = str1 >= str1;
  bool bx6 = str1 <= str1;
  cout << bx1 << endl;
  cout << bx2 << endl;
  cout << bx3 << endl;
  cout << bx4 << endl;
  cout << bx5 << endl;
  cout << bx6 << endl;

  cout << "xxxxx" << endl;
  string s1 = "a";
  string s2 = "b";
  bool by1 = s2 > s1;
  bool by2 = s2 < s1;

  bool by3 = s1 > s1;
  bool by4 = s1 < s1;
  bool by5 = s1 >= s1;
  bool by6 = s1 <= s1;
  cout << by1 << endl;
  cout << by2 << endl;
  cout << by3 << endl;
  cout << by4 << endl;
  cout << by5 << endl;
  cout << by6 << endl;
}
