"""
Title: basicObject
Author: Nicholas P Norman
Purpose: display functionalties of a basic object
Create date: 17 Sep 2023
Last modified: 17 Sep 2023
"""

class BasicObject:
    #These are both constructors, even though they look a little different
    def __init__(self):
        #construct with amount 0
        self.amount = 0;

    def __init__(self, amount):
        #set amount inputted  as starting assignment
        #note: we use self instead of this-> or this.
        self.amount = amount;

    def setAmount(self, amount):
        #set amount to input
        self.amount = amount;

    def getAmount(self):
        #get aboject & return it
        return self.amount;

def main():
    #test harness
    lizardTreats = BasicObject(20)
    
    #print values
    print("Original Value: {}".format(lizardTreats.getAmount()))

    #set new amount
    lizardTreats.setAmount(12)

    print("Modified Values: {}".format(lizardTreats.getAmount()))

if __name__ == "__main__":
    main()
