int max(int a, int b)
{
    return a > b ? a : b; 
}
int min(int a, int b)
{
    return a < b ? a : b;
}
int maxArea(int* height, int heightSize) {

    int first = 0;
    int last = heightSize-1;
    int maxheight = 0;

    while (first < last)
    {
        maxheight = max(maxheight, min(height[first], height[last])*(last-first));

        if(height[first] <= height[last])
        {
           first ++;
        }
        else
        {
            last --;
        }
    } 
    return maxheight;
}
