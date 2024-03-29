#include "String.h"
#include <iostream>
using namespace std;

String::String(const char * s) {
    head = ListNode::stringToList(s);
}

String::String( const String & s ) {
  head = s.head;
}

String String::operator = ( const String & s ) {
  // you should free the memory first?
  head = ListNode::copy(s.head);
  return * this;
}

char & String::operator [] ( const int index ) {
    if(index < 0 || index >= ListNode::length(head)) {
      cerr << "Index out of bound" << endl;
      // it should return something?
    } else {
      ListNode * current = head;
      for(int i = 0; i < index; i++) {
        current = current -> next;
      }
      return current -> info;
    }
}

int String::size() const {
    return head -> length(head);
}

int String::indexOf( char c ) const {
  ListNode * current = head;
  int counter = 0;
  while(current != NULL) {
    if (current -> info == c) {
      return counter;
    }
    counter++;
    current = current -> next;
  }
  return -1;
}

bool String::operator == ( const String & s ) const {
  return ListNode::equal(head, s.head);
}

bool String::operator < ( const String & s ) const {
  if(ListNode::compare(head, s.head) < 0) {
    return true;
  }
  return false;
}


/// concatenates this and s
String String::operator + ( const String & s ) const {
  // THIS IS CAUSEING SEGMENTATION FAULT
  String newString ;
  newString.head = ListNode::copy(head);
  ListNode::concat(newString.head, s.head);
  return newString;
}


/// concatenates s onto end of this
String String::operator += ( const String & s ) {
  ListNode * cp = ListNode::copy(s.head);
  ListNode::concat(head, cp);
  return * this;
}


// does not modify this String
String String::reverse() {
  String reversed;
  reversed.head = ListNode::copy(head);

  ListNode * previous = NULL;
  ListNode * current = reversed.head;
  ListNode * next ;

  while(current != NULL) {
     next = current -> next;
     current-> next = previous;
     previous = current;
     current = next;
   }

   reversed.head = ListNode::copy(previous);
   return reversed;
}

void String::print( ostream & out ) {
    ListNode * current = head;
    while(current!= NULL) {
      cout << current -> info ;
      current = current -> next;
    }
    // cout << endl;
}

void String::read( istream & in ) {
  char * temp = new char[128];
  in.getline(temp, 128);
  head = ListNode::stringToList(temp);
}

String::~String() {
  // String::ListNode::deleteList(this -> head);
}


ostream & operator << ( ostream & out, String str ) {
    str.print(out);
    return out;
}

istream & operator >> ( istream & in, String & str ) {
    str.read(in);
    return in;
}



/// LIST NODE METHODS

String::ListNode * String::ListNode::stringToList(const char *s) {
  if(!s[0]) {
    return NULL;
  }
  ListNode * temp = new ListNode(s[0], NULL); // pointer to be returned
  ListNode * p = temp; // moving pointer along the list
  int index = 1;
  while(s[index]) {
    ListNode * node = new ListNode(s[index], NULL);
    p -> next = node;
    p = p -> next;
    index++;
  }
  return temp;
}


// create new pointer and copy each element of the list to a new list
String::ListNode * String::ListNode::copy(ListNode * L) {
  ListNode * current = L;
  ListNode * point = new ListNode(current -> info, NULL);
  ListNode * const myHead = point;

  current = current -> next;
  while(current != NULL) {
    ListNode * temp = new ListNode(current -> info, NULL);
    point -> next = temp;
    point = point -> next;
    current = current -> next;
  }

  return myHead;
}


// Traverse all list and then check each char
bool String::ListNode::equal(ListNode * L1, ListNode * L2) {
  int i = 0;
  while(L1 != NULL || L2 != NULL) {
    if(L1 == NULL || L2 == NULL) {
      return false;
    }
    if (!(L1 -> info == L2 -> info)) {
      return false;
    }
    L1 = L1 -> next;
    L2 = L2 -> next;
  }
  return true;
}


String::ListNode * String::ListNode::concat(ListNode * L1, ListNode * L2) {
  ListNode * L1end = L1;
  // traverse first List
  while(L1end->next != NULL) {
    L1end = L1end -> next;
  }
  // concatenate the second string
  while(L2 != NULL) {
    L1end -> next = L2;
    L1end = L1end -> next;
    L2 = L2 -> next;
  }
  // make last null
  L1end -> next = NULL;

  return L1; //or L1end.
}


// loop and compare each char like in strcmp
int String::ListNode::compare(ListNode * L1, ListNode * L2) {
  ListNode * p1 = L1;
  ListNode * p2 = L2;
  while(p1 != NULL) {
    if(p2 == NULL) {
      return 1;
    }
    if(p1->info != p2->info) {
      return p1->info - p2->info;
    }
    p1 = p1 -> next;
    p2 = p2 -> next;
  }

  p1 = L1;
  p2 = L2;
  while(p2 != NULL) {
    if (p1 == NULL) {
      return -1;
    }
    if(p1->info != p2->info) {
      return p1->info - p2->info;
    }
    p1 = p1 -> next;
    p2 = p2 -> next;
  }

  return 0;
}


void String::ListNode::deleteList(ListNode * L) {
  ListNode * current = L;
  while(current != NULL) {
    ListNode * nextOne;
    nextOne = current -> next;
    delete current;
    current = nextOne;
  }
  delete current;
  L = NULL;
}


// naviate through list to get the length
int String::ListNode::length(ListNode *L) {
     int counter = 0;
     ListNode * current = L;
     while(current != NULL) {
       current = current -> next;
       counter++;
     }
     return counter;
}
