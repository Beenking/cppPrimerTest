class ListNode{
public:
    int val;
    ListNode* next;
    ListNode(int v):val(v),next(0){}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    ListNode *addlist = new ListNode(999), *p0 = addlist, *p1 = l1, *p2 = l2;
    int add1 = 0, sum1 = 0;
    while(p1 != 0 && p2 != 0){
        sum1 = p1->val + p2->val + add1;
        if(sum1 > 9){
            p0->next = new ListNode(sum1 - 10 + add1);
            add1 = 1;
        }else{
            p0->next = new ListNode(sum1 + add1);
            add1 = 0;
        }
        p0 = p0->next;
        p1 = p1->next;
        p2 = p2->next;
    }
    return addlist->next;
}


int main(){
    ListNode *head, *p = head;
    for(int i=0 ; i<10 ; ++i){
        p->next = new ListNode(i);
        p = p->next;
    }


    ListNode *l1,lnode1(2),lnode2(4),lnode3(3);
    ListNode *l2,lnode4(5),lnode5(6),lnode6(4);
    l1 = &lnode1;lnode1.next = &lnode2;lnode2.next = &lnode3;
    l2 = &lnode4;lnode4.next = &lnode5;lnode5.next = &lnode6;

    ListNode*resultList = addTwoNumbers(l1, l2);

    return 0;
}
