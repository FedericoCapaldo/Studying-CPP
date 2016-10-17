#include "String.h"
#include <iostream>
using namespace std;


char * myStrcat(char *dest, const char *src) {
  int i, j;
  for (i = 0; dest[i] != '\0'; i++) {
    for (j = 0; src[j] != '\0'; j++) {
      dest[i+j] = src[j];
    }
  }
  dest[i+j] = '\0';
  return dest;
}


int main() {
  char str[80];
  strcpy (str,"these ");
  strcat (str,"strings ");
  strcat (str,"are ");
  strcat (str,"concatenated.");
  puts (str);
  cout << String::strlen(str) << endl;
  return 0;
}
