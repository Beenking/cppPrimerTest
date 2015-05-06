class ListNode{
public:
    int val;
    ListNode* next;
    ListNode(int v):val(v),next(0){}
};

void reverseList(ListNode* l, int m, int n){
    ListNode dummy(-1);
    dummy.next = l;
    ListNode *prev = &dummy;

    for(int i = 0; i < m-1; ++i){
        prev = prev->next;
    }
    ListNode* const head2 = prev;

    prev = head2->next;
    ListNode *cur = prev->next;
    for(int i = m; i < n; ++i){
        prev->next = cur->next;
        cur->next = head2->next;
        head2->next = cur;

        cur = cur->next->next;
    }

}



int main(){

    ListNode *head1, *p = head1;
    for(int i=1 ; i<=5 ; ++i){ // tail insert
        p->next = new ListNode(i);
        p = p->next;
    }
    reverseList(head1->next, 2, 4);

    return 0;
}
