struct ListNode* rotateRight(struct ListNode* head, int k) {

    if(head == NULL ||  head->next == NULL || k ==0 )
        return head;

    struct ListNode *old_tail = head,*temp;
    int n;

    for(n = 1 ; old_tail->next != NULL ; n++)
        old_tail = old_tail->next;


    k = k%n;
    if (k == 0)
        return head ;

    old_tail->next = head;

    temp = head; 
    for(int i=1 ; i < n-k ; i++)
        temp = temp->next;
    head = temp->next;
    temp->next = NULL;
    return head;
}
