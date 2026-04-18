int reverse(int x) {
    
    int sum = 0;
    
    while(x)
    {
        if(sum > INT_MAX/10 || (sum ==INT_MAX/10 &&  x%10 > 7) )
            return 0;
        if(sum < INT_MIN/10 || (sum ==INT_MIN/10 &&  x%10 < -8) )
            return 0;
            
        sum *= 10;
        
        sum += x%10;
            
        x = x/10;
        
    }
    
    return sum;
}
