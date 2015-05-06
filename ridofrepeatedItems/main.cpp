class ListNode{
public:
    int val;
    ListNode* next;
    ListNode(int v):val(v),next(0){}
};

void DeleteMultiItems(ListNode* l){
    ListNode dummy(-1);
    ListNode *head = &dummy;
    head->next = l;

    ListNode *cur = head->next;
    ListNode *nextNode = cur->next;
    while(nextNode != 0){
        if(nextNode->val == cur->val){
            cur->next = nextNode->next;
            nextNode = cur->next;
            //delete nextNode;
        }else{
            cur = cur->next;
            nextNode = nextNode->next;
        }
    }
}

int main(){
    ListNode node1(1), node2(1), node3(2), node4(2), node5(3);
    ListNode *head = &node1;
    node1.next = &node2, node2.next = &node3, node3.next = &node4, node4.next = &node5;

    DeleteMultiItems(head);
    return 0;
}








