#include "String.h"
#include <iostream>
using namespace std;


void indexSizeIndexOf() {
  String s("some");
  cout << "string s: " << s << endl;
  cout << "s.size(): " << s.size() << endl;

  String t(s);
  cout << "t.size(): " << t.size() << endl;
  cout << "s.indexOf('s'): " << s.indexOf('s') << endl;
  cout << "s[0]: " << s[0] << endl;
  cout << "s[1]: " << s[1] << endl;
  cout << "s[2]: " << s[2] << endl;
  cout << "s[3]: " << s[3] << endl;
}

void operators() {
  String s("some");
  String w("some");
  cout << "string s: " << s << endl;
  cout << "string w: " << w << endl;
  cout << "(s == w): " << (s == w) << endl;
  String q(" will");
  cout << "string q: " << q << endl;
  cout << "(s == q): " << (s == q) << endl;
  cout << "(s + q): " << (s + q) << endl;

  String one("one");
  String two("two");
  cout << "string one: " << one << endl;
  cout << "string two: " << two << endl;
  one = two;
  cout << "one = two: " << one << endl;

  String before("before ");
  String after("after");
  cout << "string before: " << before << endl;
  before += after;
  cout << "string before += after: " << before << endl;

  String yak("aab");
  String bar("aad");
  cout << "aab < aad: " << (yak < bar) << endl;
}

void reverseAndRead() {
  String string2("my sentence is short.");
  cout << "string2: " << string2 << endl;
  cout << "string2.reverse(): " << string2.reverse() << endl;
  cout << "string2.reverse().reverse(): " << string2.reverse().reverse() << endl;

  String inputting ;
  cout << "Enter a test string: ";
  cin >> inputting;
  cout << "your input: " << inputting << endl;
}

int main() {
    indexSizeIndexOf();
    operators();
    reverseAndRead();

    return 0;
}
