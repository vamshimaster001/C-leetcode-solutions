int searchInsert(int* nums, int numsSize, int target) {
    
    int first=0;
    
    int last = numsSize-1;
    
    int mid;
    
    while(first < last)
    {
        mid = (first+last)/2;
        
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] > target)
            last = mid-1;
        else 
            first = mid+1;
    }
    
    if(target > nums[first])
        return first+1;
    
    return first;
}
