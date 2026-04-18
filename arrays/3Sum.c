int compare(const void *a,const void *b)
{
    return (*(int *)a-*(int *)b);
}

static void threesum1(int *nums,int** result,int i, int *returnSize, int *returnColumnSizes,int numsSize);

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {

    qsort(nums,numsSize,sizeof(int),compare);

    *returnSize = 0;

    int **result = (int **)malloc(sizeof(int *) * (numsSize*numsSize));
    *returnColumnSizes = (int *)malloc(sizeof(int)*(numsSize*numsSize));

    for (int i = 0; i < numsSize; i++)
    {
        if(nums[i] > 0)
        {
            break;
        }
        if(i == 0 || nums[i] != nums[i-1])
        {
            threesum1(nums, result, i, returnSize, *returnColumnSizes,numsSize);
        } 
    }
  return result;
}

void threesum1(int *nums, int** result, int i, int *returnSize, int* returnColumnSizes,int numsSize)
{
    int lo = i+1;
    int hi = numsSize-1;

    while (lo < hi)
    {
        int sum = nums[i]+nums[lo]+nums[hi];
        if (sum > 0)
        {
            hi-- ;
        }
        else if (sum < 0)
        {
           lo++;
        }
        else
        {

            result[*returnSize] = (int*)malloc(sizeof(int)*3);
            result[*returnSize][0] = nums[i];
            result[*returnSize][1] = nums[lo];
            result[*returnSize][2] = nums[hi];
            returnColumnSizes[*returnSize] = 3;
            (*returnSize)++;
            lo++;
            hi--;
            while(lo < hi && nums[lo] == nums[lo-1])
                lo++;
            while(lo < hi && nums[hi] == nums[hi+1])
                hi--; 
        }

    }
}
