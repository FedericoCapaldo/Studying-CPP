#include "String.h"
#include <iostream>
using namespace std;

int main() {

    String s("some");
    cout << s.size() << endl;

    String t(s);
    cout << t.size() << endl;

    return 0;
}
