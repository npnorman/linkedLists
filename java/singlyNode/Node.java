/*
 * Title: Node
 * Author: Nicholas P Norman
 * Purpose: showcase a node and linking
 * Create date: 17 Sep 2023
 * Last modified: 17 Sep 2023
 *
 */

import java.util.*;

class Node {

  int data;
  Node next;

  Node() {
    data = 0;
    next = null;
  }//end constr

  Node(int data) {
    //set data to input
    this.data = data;
    next = null;
  }//end constr

  public static void main(String[] args) {
    //test harness and linking
    //we will use the scanner class in java for input
    Scanner scan = new Scanner(System.in);
    System.out.println("[0] Test harness");
    System.out.println("[1] Test linking");
    String input = scan.nextLine();
    if (input.equals("0")) {
      Node node = new Node(5);
      System.out.println("Original Value: " + node.getData());
      node.setData(3);
      System.out.println("Modified Value: " + node.getData());

    } else {
      //lets show two nodes linking together
      //first we store the first node so we dont lose track of it
      Node head = new Node(4);

      //now create a second node to attach. because this node will not be referenced directly we can use an anonymous constructor
      head.setNext(new Node(17));
      
      //now lets traverse the two nodes similar to an array
      System.out.println("{" + head.getData() + "," + head.getNext().getData() + "}");
      
      //now add another, we can do this indefinitley
      head.getNext().setNext(new Node(2012));

      System.out.println("{" + head.getData() + "," + head.getNext().getData() + "," + head.getNext().getNext().getData() + "}");

    }//end if
  }//end main

  public int getData() {
    //return data
    return data;
  }//end getData

  public void setData(int data) {
    //set data to input
    this.data = data;
  }//end setData() 

  public Node getNext() {
    //return next node's reference
    return next;
  }//end getNext

  public void setNext(Node next) {
    //set next to another node
    this.next = next;
  }//end setNext

}
