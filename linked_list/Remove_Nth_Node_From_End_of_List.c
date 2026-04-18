struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

    struct ListNode* first = head;
    struct ListNode* second = head;

    for(int i = 0 ; i < n; i++)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        struct ListNode* newhead = head->next;
        free(head);
        return newhead;
    }
   
    temp = head;

    for(temp !=NULL)
    {
        temp = temp->next;

    }
    struct ListNode* temp1 = temp->next;
    temp->next = temp->next->next;
    free(temp1);
    return head;
}

