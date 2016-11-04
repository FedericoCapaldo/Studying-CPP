#include "String.h"
#include <iostream>
using namespace std;

int main() {

    String s("some");
    cout << s.size() << endl;

    String t(s);
    cout << t.size() << endl;
    cout << s.indexOf('s') << endl;
    cout << s[0] << endl;
    cout << s[1] << endl;
    cout << s[2] << endl;
    cout << s[3] << endl;


    String w("some");
    cout << (s == w) << endl;
    String q(" will");
    cout << (s == q) << endl;
    cout << ((((s + q)+q)+q)+q) << endl;
    cout << s << endl;
    cout << q << endl;
    String one("one");
    String two("two");
    cout << one << endl;
    cout << two << endl;
    one = two;
    cout << one << endl;

    String before("before ");
    String after("after");
    cout << before << endl;
    before += after;
    cout << before << endl;
    before += after;
    cout << before << endl;
    before += after;
    cout << before << endl;
    before += after;
    cout << before << endl;
    after += after;
    after += after;
    cout << after << endl;

    return 0;
}
