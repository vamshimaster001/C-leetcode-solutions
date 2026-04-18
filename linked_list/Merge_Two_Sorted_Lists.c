struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *dummynode = (struct ListNode *)malloc(sizeof(struct ListNode)), *head , *temp;
    if(!dummynode)
    {
        return NULL;
    }
    dummynode->val = 0;
    dummynode->next = NULL;
    head = dummynode;
    while(list1 && list2)
    {
        if(list1->val <= list2->val)
        {
            head->next = list1;
            head = head->next;
            list1 = list1->next;
        }
        else
        {
            head->next = list2;
            head = head->next;
            list2 = list2->next;   
        }
    }
    
    head->next = list1 ? list1 : list2 ; 

    temp = dummynode->next; 
    free(dummynode);
    return temp;
}
