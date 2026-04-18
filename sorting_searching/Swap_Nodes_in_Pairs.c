
struct ListNode* swapPairs(struct ListNode* head) {

    if(!head)
        return head;
 
    struct ListNode* first = head, *nextnode, *prev = NULL;
    struct ListNode* second = head->next;
    head = second ? second : first;

    while(second)
    { 
        nextnode = second->next;
        second->next = first;
        first->next = nextnode;
        if(prev)
            prev->next = second;
        if(!nextnode)
            break;
        prev = first;
        first = nextnode;
        second = nextnode->next;
    }

    return head;
}
