"""
Title: Node
Author: Nicholas P Norman
Purpose: display node and linking
Create date: 18 Sep 2023
Last modified: 18 Sep 2023
"""

class Node:

    def __init__(self, data=0):
        #set data to input
        self.data = data
        self.nextNode = None

    def getData(self):
        #return data
        return self.data

    def setData(self, data):
        #set data to input
        self.data = data

    def getNext(self):
        #return next
        return self.nextNode;

    def setNext(self, nextNode):
        self.nextNode = nextNode

def main():
    
    menu = "[0] Test harness\n[1] Linking Script"
    print(menu)
    userInput = input()
    if userInput == "0":
        #test harness
        node = Node()
        temp = Node(4)
        print(node.getData())
        print(temp.getData())
        temp.setData(23)
        print(temp.getData())
    else:
        #lets show two nodes linking together
        #first we store the first node so we dont lose track of it
        head = Node(2)

        #now create a second node to attach. because this node will not be referenced directly we can use an anonymous constructor 
        head.setNext(Node(34))
        
        #now lets traverse the two nodes similar to an array
        print("({},{})".format(head.getData(), head.getNext().getData()))

        #now add another, we can do this indefinitley
        head.getNext().setNext(Node(11))

        print("({},{},{})".format(head.getData(), head.getNext().getData(), head.getNext().getNext().getData()))

if __name__ == "__main__":
    main()
