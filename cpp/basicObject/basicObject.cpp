/*
 * Title: basic object
 * Author: Nicholas P Norman
 * Purpose: showcase a basic object
 * Create date: 16 Sep 2023
 * Last Modified: 16 Sep 2023
 */

#include <iostream>

class BasicObject {

  private:
  
  int amount; //stores amount

  public:
  
  BasicObject() {
    //when object is constructed it sets amount to 0
    amount = 0;
  }//end constr

  BasicObject(int amount) {
    //set amount inputted as starting assignment
    //note: this represents the local amount stored inside of the object,
    //      whereas the second amount is the one in the parameter
    this->amount = amount;
  }//end constr

  void setAmount(int amount) {
    //set amount to input
    this->amount = amount;
  }//end setAmount
  
  int getAmount() {
    //get amount value from object to user
    return amount;
  }//end getAmount

};//end object

int main() {
  //test out our new object. We are storing a certain amount of dog treats.
  BasicObject dogTreats(7);

  //print out current value
  std::cout << "Original Value: " << dogTreats.getAmount() << std::endl;

  //set value 35
  dogTreats.setAmount(35);

  //print new value
  std::cout << "Modified Value: " << dogTreats.getAmount() << std::endl;

  return 0;
}//end main
