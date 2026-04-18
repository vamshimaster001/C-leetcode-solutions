int myAtoi(char* str) {
    
    int dec = 0 ;
    
    int j=0;
        
    int i=0;
    
    int flag = 0;

    while(str[i])
    {
        
        if(str[i]==' ')
        {
            if(j>0)
               break;
            else
              {
                i++;
                continue;
              }
        }
        else if(str[i] >= 48 && str[i] <= 57)
        {  
             
                  
             if(dec > INT_MAX/10 || (dec == INT_MAX/10) && (str[i]-48 > 7 ))
             {
                 
                 if(flag)
                   return INT_MIN; 
                 
                 return INT_MAX;
             }
            
            dec = dec*10 ;
            
            dec += (str[i]-48);
            
             printf("%d\n", dec);
      
            
             j++; 
        }
        
        else if(str[i] == '-'||str[i] == '+')
        {
            if(j>0)
               break;
            else
            {
                if(str[i] == '+')
                    flag = 0;
                else
                   flag = 1;
                j++;
                
            }
        } 
        else
        {
            if(j==0)
                return 0;
            else
            {
                break;
            }
        }
     i++;
    }
    
    if(flag == 1)
        return -dec;
    
return dec;
    
}
