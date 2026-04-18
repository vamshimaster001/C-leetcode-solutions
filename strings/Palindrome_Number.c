int reverse(int x) {
    
    int sum=0;
    
    while(x)
    {
        sum *= 10;
        
        sum =sum+(x%10);
        
        x = x/10; 
           
    }
    return sum;
}


bool isPalindrome(int x) 
{
  if(x>=0)
  {
      if(x == reverse(x))
          return 1;
      else
          return 0;
  }
  return 0;  
      
}
