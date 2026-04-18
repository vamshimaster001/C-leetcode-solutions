int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
} 

int threeSumClosest(int* nums, int numsSize, int target) {
    int diff = INT_MAX;
    int total = 0;
    qsort(nums,numsSize,sizeof(int),compare);
    for(int i = 0 ; i < numsSize-2; i++)
    {
        int lo = i+1;
        int hi = numsSize-1;

        while(lo < hi)
        {
            int sum = nums[i] + nums[lo]+nums[hi];
            if (abs(sum-target) < diff)
            {
                diff = abs(sum-target);
                total = sum;
                if (diff == 0)
                return total;
            }
            if(sum < target)
                lo++;
            else
                hi--;
        }
    }
    return total;
}
