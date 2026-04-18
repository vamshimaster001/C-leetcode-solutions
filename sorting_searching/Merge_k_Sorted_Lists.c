struct ListNode* merge(struct ListNode* list1, struct ListNode* list2)
{
  struct ListNode* dummynode = (struct ListNode*)malloc(sizeof(struct ListNode)), *tail ;
  if(!dummynode)
  {
    return NULL;
  }

  dummynode->val = 0;
  dummynode->next = NULL;
  tail = dummynode;

  while(list1 && list2)
  {
    if(list1->val <= list2->val)
    {
        tail->next = list1;
        list1 = list1->next;
    }
    else
    {
        tail->next = list2;
        list2 = list2->next;
    }
     tail = tail->next; 
  } 

  tail->next = list1 ? list1 :list2;
  
  struct ListNode* temp = dummynode->next;
  free(dummynode);
  return temp;
}

struct ListNode* mergesort(struct ListNode** lists, int first, int last)
{
    if(first == last)
    {
        return lists[first];
    }
    int mid = first+(last-first)/2;
    struct ListNode* list1 = mergesort(lists,first,mid);
    struct ListNode* list2 = mergesort(lists,mid+1,last);
    struct ListNode* list = merge(list1,list2);
    return list;
 
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    if(!lists || listsSize == 0)
        return NULL;
    return mergesort(lists,0,listsSize-1);
}
