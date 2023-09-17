/*
 * Title: BasicObject
 * Author: Nicholas P Norman
 * Purpose: display a basic object
 * Create date: 17 Sep 2023
 * Last Modified: 17 Sep 2023
 */

import java.util.*;

public class BasicObject {

  int amount = 0; //sets default to zero so I do not have to in the constructor
  
  public static void main(String[] args) {
    //unlike c++, we can build the test harness right into the object
    //also we are forced to use the heap (new)
    BasicObject catTreats = new BasicObject(9);
    
    //notice different printing syntax, if you forget just look it up, no need to memorize
    System.out.println("Original Value: " + catTreats.getAmount());

    //setting new amount
    catTreats.setAmount(127);
    
    System.out.println("Modified Value: " + catTreats.getAmount());
  }//end main

  public BasicObject() {
    //alraedy set, but will again for consistency with code
    amount = 0;
  }//end constr
  
  public BasicObject(int amount) {
    //set amount inputted as starting assignment
    //note: java uses references, not pointers, so this no longer needs to be dereferenced (this->)
    this.amount = amount;
  }//end constr

  public void setAmount(int amount) {
    //set amount to input
    this.amount = amount;
  }//end setAmount

  public int getAmount() {
    //get amount from objects & return it
    return amount;
  }//end getAmount

}//end BasicObject
