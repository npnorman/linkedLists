/*
 * Title: main.cpp
 * Author: Nicholas Norman
 * Purpose: implement a linked list
 * Create date: 23 Sep 2023
 * Last modified: 23 Sep 2023
 */

#include <iostream>
#include "linkedList.h"
#include "node.h"

int main() {
  LinkedList* ll = new LinkedList();
  std::cout << "empty list: ";
  ll->print();
  ll->append(3);
  std::cout << "appended 3, ll: ";
  ll->print();
  ll->append(67);
  std::cout << "appended 67, ll: ";
  ll->print();

  return 0;
}//end main
