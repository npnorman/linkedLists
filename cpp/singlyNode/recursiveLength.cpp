/*
 * Title: Recursive length
 * Author: Nicholas P Norman
 * Purpose: a very basic recursive script
 * Create date: 18 Sep 2023
 * Last modified: 18 Sep 20233
 */

#include <iostream>

class Node {
  
  private:
  int data;
  Node* next;
  
  public:
  Node() {
    //set data to 0
    data = 0;
    //set next to null
    next = NULL;

  }//end constr

  Node(int data) {
    //set data to input
    this->data = data;
    //set next to null
    next = NULL;

  }//end constr

  int getData() {
    //return data
    return data;

  }//end getData

  void setData(int data) {
    //set data to input
    this->data = data;

  }//end setData
  
  Node* getNext() {
    //return next
    return next;

  }//end getNext

  ~Node() {
    //we use the destructor to delete off of the heap
    std::cout << "I am deleted" << std::endl;
  }//end destructor

  void setNext(Node* next) {
    //set next to input
    this->next = next;

  }//end setNext

};//end Node

int getLength(Node* temp) {

  int output = 0;
  //if node is equal to null
  if (temp == NULL) {
    //base case -> output is 0, were are done
    output = 0;
  //else, node is not null
  } else {
    //check next is null by calling same function
    //assign output what the function returns
    output = getLength(temp->getNext());
    //after completed -> add one to the output, (eventually adds one for each node in list, length)
    output++;
    //output -> output
  }//end if
  //return output
  return output;

}//end get Length

int main() {
  //test harness
  Node* head = new Node(1);

  std::cout << "Length: " << getLength(head) << std::endl;

  head->setNext(new Node(4));

  std::cout << "Length: " << getLength(head) << std::endl;

  head->getNext()->setNext(new Node(34));
  head->getNext()->getNext()->setNext(new Node(13));
  head->getNext()->getNext()->getNext()->setNext(new Node(1));

  std::cout << "Length: " << getLength(head) << std::endl;

  return 0;

}
