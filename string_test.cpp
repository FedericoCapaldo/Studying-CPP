#include "String.h"
#include <iostream>
using namespace std;



int main() {
  char str1[]="Sample string";
  char str2[40];
  char str3[40];
  String::strcpy (str2,str1);
  String::strcpy (str3,"copy successful");
  printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
  return 0;
}
