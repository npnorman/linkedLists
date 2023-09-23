### notice that we are using the node class

````mermaid
classDiagram
	    class Node {
		        int data
		        Node next
		        +Node()
		        +Node(int data)
		        +getData() int
		        +setData(int data) void
		        +getNext() node
		        +setNext(Node node) void
	    }

    class LinkedList {
        Node head
        +LinkedList()
        +getLength() int
        -countNode(Node temp) int
        +append(int data) void
        +pop() Node
        +get(int index) int
        +print() void
    }

    LinkedList *-- Node
````
Node | Node() | Node(int data) | getData() | setData(int data) | getNext() | setNext(Node node)
-|-|-|-|-|-|-
Goal | construct a new class | construct a class with parameters | return data | set data | return next node | set next node
Input |  |  |  | integer |  | Node
Output |  |  | integer |  | Node| 
Steps | * set data to 0 <br> * set next to null | * set data to input <br> * set next to null | * return data | * set data to input | * return next | * set next to another node

LinkedList | LinkedList() | getLength() | countNode(Node temp) | append(int data) | pop() | get(int index) | print()
-|-|-|-|-|-|-|-
Goal | construct a Linked list | get the length of a linked list | recursively find length of list| append a node to the end of the list | delete the last item in the list and return it | return data from node at specified index | print entire list in array format
Input | | | Node|integer data | | integer index | 
Output | LinkedList | length integer | integer| node added to list| integer | integer data | 

<br>

## Linked List Methods
* LinkedList() 
```c
//set default head to NULL
```
* getLength()
```c
//call countNode(head)
```
* countNode(Node Temp)
```c
//recursive approach
//set integer output variable to 0
//if the Node is equal to NULL
	//base case (we are at the end of the list) e.g. head->node->node->NULL
	//return 0, NULL is not in list, so we dont count it
//else the Node is not null, meaning it is in the list
	//not the base case so check if the next node is NULL
	//assign output variable to the return of countNode() (same function)
	//after completed, which mean each node before it has returned its value
	//add one to output because we are counting the node as part of the length
//return the output
```
* append(int data)
```c
//iterative approach
//start at the head node
//if head is NULL
	//set head to a new constructed node with inputted data
//else
	//go through each node
		//once the node whos next is equal to NULL (base case, end of the list)
	//set that node's next to a new constructed node with inputted data
```
* pop()
```cpp
//iterative approach
//start at the head node
//if head is NULL
	//return 0 output "Empty List"
//else
	//go through each node
		//once the node whos next's next is equal to NULL (base case, 2nd to end of the list)
		//this is the 2nd to last node in the list ...->(2nd)->(1st)->NULL
//create an integer to hold value of last node
//delete the last node in the list
//set the 2nd to lasts node's next equal to NULL
//return the integer variable
```
* get(int index)
```cpp
//iterative approach
//start at head node
//if head is NULL
	//return 0 and output error
//else
	//go through the list index times
	  //if the node equals NULL
		  //reached the end, not in list
		  //output is 0, print error message
//return integer at value
```
* print()
```cpp
//iterative approach
//starting at the head
//if head is NULL
	//print string "{}"
//else
	//print "{"
	//go through each node
		//stop when the node is null (base case, end of list)
		//print data
		//if node's next is null
			//print "}" to close the list
		//else
			//print "," to separate
```
