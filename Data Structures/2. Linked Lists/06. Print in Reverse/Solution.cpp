// https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem

void reversePrint(SinglyLinkedListNode* head) {
   deque<int> values;
   for(SinglyLinkedListNode* current = head; current != 0; current = current->next){
       values.push_front(current->data);
   }
   for(auto value : values){
       cout << value << endl;
   }
}

void reversePrintRecursive(SinglyLinkedListNode* head) {
    if(head!=NULL){
        reversePrint(head->next);
        cout << head->data << "\n";
    }
}