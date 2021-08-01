// https://www.hackerrank.com/challenges/reverse-a-linked-list/problem

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode* next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* current = head;
    SinglyLinkedListNode* prev = NULL, *next = NULL;
    while (current != NULL) { 
        next = current->next; 
        current->next = prev;  
        prev = current; 
        current = next; 
    } 
    head = prev; 
    return head;
}