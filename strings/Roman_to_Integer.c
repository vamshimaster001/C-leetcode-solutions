int romanToInt(char* s) {
    struct dictkey
    {
        char sym;
        int val;
    }arr[7];

    char symbols[] = {'I', 'V', 'X', 'L','C','D','M'};
    int values[] = {1,5,10,50,100,500,1000}; 

    for(int i = 0 ; i < 7; i++)
    {
        arr[i].sym = symbols[i];
        arr[i].val = values[i];
    }

    int findvalue(char sym)
    {
        for(int i = 0; i < 7; i++)
        {
           if (arr[i].sym == sym)
                return arr[i].val;
        }
        return 0;
    }

    int result = findvalue(s[0]);
     for (int i = 1; s[i] != '\0' ; i++)
     {
       if( findvalue(s[i]) <= findvalue(s[i-1]))
       {
        result = result + findvalue(s[i]);
       }
       else
       {
        result = result+ findvalue(s[i])-2*findvalue(s[i-1]); 
       }

     } 
    return result ;
}
