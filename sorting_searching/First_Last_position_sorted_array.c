
int findposition(int *nums,int numsSize,int target, bool flag)
{
    int first = 0;

    int last = numsSize-1;

    int result = -1;

    while(first <= last)
    {
        int mid = first+(last-first)/2;
      
      if(nums[mid] == target)
      {
        result = mid;

        if(flag)
        {
          last = mid-1;
        }
        else
        {
          first = mid+1;
        }
      }
      else if(target < nums[mid])
      {
        last = mid-1;
      }
      else
      {
        first = mid+1;
      }
    }
  return result;
} 

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int first = findposition(nums,numsSize,target,true);
    int last = findposition(nums,numsSize,target,false); 
    *returnSize = 2;
    int *result = (int *)malloc(sizeof(int)*2);
    result[0] = first;
    result[1] = last;
    return result;
}
