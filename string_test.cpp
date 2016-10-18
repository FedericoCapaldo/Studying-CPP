#include "String.h"
#include <iostream>
using namespace std;

const char * myStrchr( const char *str, int c ) {
  while(*str != '\0'){
    if(*str == c) {
      return str;
    }
    str++;
  }
  return 0;
}

int main() {
  const char str[] = "This is a sample string";
  const char * pch;
  printf ("Looking for the 's' character in \"%s\"...\n",str);
  pch=String::strchr(str,'s');
  while (pch!=NULL)
  {
    printf ("found at %d\n",pch-str+1);
    pch=String::strchr(pch+1,'s');
  }

  return 0;
}
