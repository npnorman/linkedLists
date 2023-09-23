/*
 * Title: Singly Linked List
 * Author: Nicholas P Norman
 * Purpose: Linked List Object
 * Create date: 23 Sep 2023
 * Last Modified: 23 Sep 2023
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"
#include <iostream>

class LinkedList {

  private:
  Node* head;

  public:
  LinkedList() {
    this->head = NULL;
  }//end constr
  
  int getLength() {
    return countNode(head);
  }//end getLength

  int countNode(Node* temp) {
    return 0;
  }//end coutNode
  
  void append(int data) {
    //iterative approach
    //start at head node
    Node* temp = head;
    //if head is NULL
    if (head == NULL) {
      //set head to a new constructed node with inputted data
      this->head = new Node(data);
    } else {
    //else
      //go through each node
      while (temp->getNext() != NULL) {
        //once the node who's next is equal to NULL (base case, end of list)
	temp = temp->getNext();
      }//end while
      //set that node's next to a new constructed node with inputted data
      temp->setNext(new Node(data));
    }//end if
  }//end append

  Node* pop() {
    return (new Node());
  }//end pop

  int get(int index) {
    return 0;
  }//end get

  void print() {
    //iterative approach
    //if head is null
    if (head == NULL) {  
      //print "{}"
      std::cout << "{}" << std::endl;
    } else {
    //else
      //print "{"
      std::cout << "{";
      //go through each node & stop when node is null (base case, end of list)
      Node* temp = head;
      while (temp != NULL) {
        //print data
	std::cout << temp->getData();
        //if node's next is NULL
	if (temp->getNext() == NULL) {
          //print "}", end of list
	  std::cout << "}" << std::endl;
        //else
        } else {
          //print ","
          std::cout << ",";
	}//end if
      temp = temp->getNext();
      }//end while
    }//end if
  }//end print

};//end LinkedList

#endif
