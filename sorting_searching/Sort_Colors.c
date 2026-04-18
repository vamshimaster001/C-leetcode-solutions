void sortColors(int* nums, int numsSize){
    
    int i=0;
    int count1=0;
    int count2=0;
    int count3=0;
    
    for(i=0; i < numsSize; i++)
    {
        if(nums[i] == 0)
            count1++ ;
        else if(nums[i] == 1)
            count2++;
        else
            count3++;
    }
    
    for(i=0;i<numsSize;i++)
    {
        if(count1>0)
        {
            nums[i] = 0;
            count1 = count1-1;
        }
        else if(count2>0)
        {
            nums[i] = 1;
            count2 = count2-1;
        }
        else
        {
            nums[i] = 2;
            count3 = count3-1;
        }  
    }
        
}
