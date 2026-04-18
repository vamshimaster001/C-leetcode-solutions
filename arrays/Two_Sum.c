struct hash
 {
    int key;
    int value;
    UT_hash_handle hh;
 }*hashtable = NULL,*item;

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int *result = malloc(2*sizeof(int));
    for(int i = 0; i < numsSize; i++)
    {
        int complement = target-nums[i];
        HASH_FIND_INT(hashtable,&complement,item);
        if(item)
        {
          result[0] = i ;
          result[1] = item->value;
          *returnSize = 2;
          HASH_CLEAR(hh,hashtable);
          return result;
        }
        item = malloc(sizeof(struct hash));
        item->key = nums[i];
        item->value = i;
        HASH_ADD_INT(hashtable,key,item);
    }
    HASH_CLEAR(hh, hashtable);
    return result;
}
