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
````
Node | Node() | Node(int data) | getData() | setData(int data) | getNext() | setNext(Node node)
-|-|-|-|-|-|-
Goal | construct a new class | construct a class with parameters | return data | set data | return next node | set next node
Input |  |  |  | integer |  | Node
Output |  |  | integer |  | Node| 
Steps | * set data to 0 <br> * set next to null | * set data to input <br> * set next to null | * return data | * set data to input | * return next | * set next to another node
