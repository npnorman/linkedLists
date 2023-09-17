"""
Title: BasicNode
Author: Nicholas P Norman
Purpose: showcase how an object becomes a node
Create date: 17 Sep 2023
Last modified: 17 Sep 2023
"""

class BasicNode:
    def __init__(self):
        self.data = None;
        #because python uses references, we do not need to specify the pointer
        self.next = None;

def main():
    #nothing to test
    node = BasicNode()

if __name__ == "__main__":
    main()
