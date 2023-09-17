## ../singlyNode/

### basicObject

class BasicObject {
  int amount;
  BasicObject() : void
  BasicObject(int amount) : void
  setAmount(int amount) : void
  getAmount() : int
}

basicObject | BasicObject() | BasicObject(int amount) | setAmount(int amount) | getAmount()
-|-|-|-|-
Goal | construct a new class | construct a class with parameters | set the amount | get the amount
Input | n/a | integer | integer | n/a
Output | n/a | n/a | n/a | integer
Steps | * construct object with amount 0 | * construct object <br> * set amount inputted as starting assignment | * set amount to input | * get amount from object <br> * return value to the user
