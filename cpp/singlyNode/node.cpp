/*
 * Title: Node
 * Author: Nicholas P Norman
 * Purpose: a very basic node
 * Create date: 17 Sep 2023
 * Last modified: 17 Sep 20233
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

int main() {
  
  int input = 0;
  std::cout << "[0] Test harness" << std::endl << "[1] link nodes script" << std::endl;
  std::cin >> input;
  if (input == 0) {
    //test harness
    Node* node = new Node(7);
    std::cout << "Original Value: " << node->getData() << std::endl;
    node->setData(3);
    std::cout << "Modified Value: " << node->getData() << std::endl;
  
    delete node;

  } else {
    //lets show two nodes linking together
    //first we store the first node so we dont lose track of it
    Node* head = new Node(10);
    
    //now create a second node to attach. because this node will not be referenced directly we can use an anonymous constructor
    head->setNext(new Node(23));

    //now lets traverse the two nodes similar to an array
    std::cout << "{" << head->getData() << "," << head->getNext()->getData() << "}" << std::endl;

    //now add another, we can do this indefinitley
    head->getNext()->setNext(new Node(22));

    std::cout << "{" << head->getData() << "," << head->getNext()->getData() << "," << head->getNext()->getNext()->getData() << "}" << std::endl;

    //In cpp we must delete anything on the heap after we are done. (heap)
    delete head->getNext()->getNext();
    delete head->getNext();
    delete head;
  }//end if

  return 0;
}
