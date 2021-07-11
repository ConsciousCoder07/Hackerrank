# Problem Description
```
https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem
```

# Explanation
```
Iterate through entire linked list util head becomes null meanwhile printing its data entry
```

# Code

## C++
```c++
void printLinkedList(SinglyLinkedListNode* head) {
    while(head != NULL){
        cout << head->data << endl;
        head = head->next;
    }
}
```

## Python
```py
def printLinkedList(head):
    while head:
        print(head.data)
        head = head.next
```

## Java
```java
    static void printLinkedList(SinglyLinkedListNode head) {
        while(head!=null){
            System.out.println(head.data);
            head = head.next;
        }
    }
```