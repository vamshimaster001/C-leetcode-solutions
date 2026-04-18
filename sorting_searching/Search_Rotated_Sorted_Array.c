int search(int* nums, int numsSize, int target) {

    int first = 0; 
    int last = numsSize-1;

    while(first <= last)
    {
        int mid = first+(last-first)/2;

        if(target == nums[mid])
        {
            return mid;
        }
        else if(nums[mid] <= nums[last])  
        {
            if(target >= nums[mid] && target <= nums[last])
            {
              first = mid+1;
            } 
            else
            {
                last =mid-1;
            }
        }
        else
        {
            if(target <= nums[mid] && target >= nums[first])
            {
                last = mid-1;
            }
            else
            {
                first = mid+1;
            }

        }
    }
    return -1;
}
