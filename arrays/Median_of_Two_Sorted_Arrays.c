int max (int a , int b) { return ( a > b) ? a : b ; }
int min (int a , int b) { return (a < b) ? a : b ; }
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) 
{
     if (nums1Size > nums2Size)
         return findMedianSortedArrays(nums2,nums2Size,nums1,nums1Size);

     int first=0 ; int last=nums1Size;

     while(first <= last)
     {
        int partitionA = (first+last)/2;
        int partitionB = (nums1Size+nums2Size+1)/2-partitionA;

        int maxleftA = (partitionA == 0) ? INT_MIN : nums1[partitionA-1];
        int maxleftB = (partitionB == 0) ? INT_MIN : nums2[partitionB-1]; 
        int minrightA = (partitionA == nums1Size)? INT_MAX : nums1[partitionA];
        int minrightB = (partitionB == nums2Size) ? INT_MAX : nums2[partitionB];

        if(maxleftA <= minrightB && maxleftB <= minrightA)
        {
            if((nums1Size+nums2Size)%2 == 0)
                return (max(maxleftA, maxleftB)+min(minrightA, minrightB))/2.0;
            else
                return max(maxleftA, maxleftB);

        }
        else if(maxleftA > minrightB )
        { 
           last = partitionA-1;
        }
        else
        {
            first = partitionA+1;
        }
}
return 0.0;
}
