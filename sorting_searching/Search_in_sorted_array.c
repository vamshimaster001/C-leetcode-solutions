bool search(int* nums, int numsSize, int target) {

    int first = 0;

    int last = numsSize-1;

    while(first <= last)
    {
        int mid = (first+last)/2;

        if(nums[mid]==target)
        {
            return true;
        }
        if( nums[first] == nums[mid] && nums[mid] == nums[last])
        {
            first++;
            last--; 
        }
        else if(nums[first] <= nums[mid])
        {
           if(target >= nums[first] && target < nums[mid])
           {
             last = mid-1;
           }
           else
           {
            first = mid+1;
           }
        }
        else
        {

          if (target > nums[mid] && target <= nums[last])
          {
            first = mid+1;
          }
          else
          {
             last = mid-1;
          }

        }
        
    }
 return false;

}
