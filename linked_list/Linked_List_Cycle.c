bool hasCycle(struct ListNode *head) {

    if(head == NULL || head->next == NULL)
        return false;

    struct ListNode *first = head;
    struct ListNode *second = head;

    while(first != NULL && second != NULL && second->next != NULL)
    {
        first = first->next;
        second = second->next->next;

        if(first == second)
            return true;
    }

 return false; 
}
