#include "String.h"
#include <iostream>
using namespace std;


void assignmentsAndOperations() {

    cout << "***Declaration, assignment, size, [], print***" << endl;
    String s("zzzzzz");
    String t("luck");
    String p("elele");

    cout << s.size() << endl; // output: 6
    s = t;
    cout << s.size() << endl; // output: 4
    cout << s[3] << endl; // output: k

    s += s;
    cout << s.size() << endl; // output: 8
    cout << s << endl; // output: luckluck
    cout << s+p << endl; // output: luckluckelele
    cout << s << endl; // output: luckluck
}


void operatorss() {
  cout << "***All Operators***" << endl;
  String p("elele");
  bool b = p == p;
  cout << b << endl; // output: 1

  bool b2 = p != p;
  cout << b2 << endl; // output: 0

  String str1("a");
  String str2("b");
  bool bx1 = str2 > str1;
  bool bx2 = str2 < str1;

  bool bx3 = str1 > str1;
  bool bx4 = str1 < str1;
  bool bx5 = str1 >= str1;
  bool bx6 = str1 <= str1;
  cout << bx1 << endl; // output: 1
  cout << bx2 << endl; // output: 0
  cout << bx3 << endl; // output: 0
  cout << bx4 << endl; // output: 0
  cout << bx5 << endl; // output: 1
  cout << bx6 << endl; // output: 1
}

void indexes() {
  cout << "***IndexOf***" << endl;
  String oxa("leopard");
  int index = oxa.indexOf('p');
  cout << index << endl; // output: 3
  String oxa2("giraffe");
  int index2 = oxa2.indexOf('f');
  cout << index2 << endl; // output: 4


  String pda("super long sentence to test");
  String pd2("long");
  int ind = pda.indexOf(pd2);
  cout << ind << endl; // output: 6
  String pda2("today i am very hungry");
  String pd22("very");
  int ind2 = pda2.indexOf(pd22);
  cout << ind2 << endl; // output: 11
}

void readAndReverse() {
  // could not fully implement read() and reverse() but there is a part of code working for both
}


int main() {
  assignmentsAndOperations();
  operatorss();
  indexes();
}
