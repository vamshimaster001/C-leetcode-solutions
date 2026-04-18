int trap(int* height, int heightSize) {
    
    int left = 0;
    int right = heightSize-1 ;
    int ans = 0;
    int leftmax = height[0] ; int rightmax = height[heightSize-1];


    while(left < right)
    {
       if(height[left] > height[leftmax])
       {
            leftmax = left;
       }
       else
       {
         ans += height[leftmax]-height[rightmax];
       }

       left++;

        if(height[right] > height[rightmax])
       {
            rightmax = right;
       }
       else
       {
         ans += height[leftmax]-height[rightmax];
       }
       right--;
    }
    return ans;
}
