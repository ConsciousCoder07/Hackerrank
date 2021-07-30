// https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem

static void reversePrint(SinglyLinkedListNode head) {
    Stack stk = new Stack();
    while(head != null){
        stk.push(head.data);
        head = head.next;
    }
    while(!stk.empty()){
        System.out.println(stk.pop());
    }
}

static void reversePrintRecursive(SinglyLinkedListNode head) {
    if(head != null){
        reversePrint(head.next);
        System.out.println(head.data);
    }
  }