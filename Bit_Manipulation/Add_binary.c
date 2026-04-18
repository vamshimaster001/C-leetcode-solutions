void reverse(char *str)
{
    int n = strlen(str);
    for(int i=0; i < n/2 ; i++)
    {
        char temp = str[n-i-1];
        str[n-i-1] = str[i];
        str[i] = temp;
    }
}

char* addBinary(char* a, char* b) 
{
    int n = strlen(a);
    int m = strlen(b);

    if(n < m)
        return addBinary(m,n);
    
    int j = m-1;
    int pos = 0;
    int carry = 0;

    char *result = malloc(sizeof(int)*(n+2));
    if(!result) return NULL; 

    for( int i = n-1; i >= 0 ; i-- )
    {
        if(a[i] == '1') carry++ ;
        if(j >= 0 && b[j--] == '1') carry++ ;

        result[pos++] = carry % 2;
        carry = carry/2;
    }
    
    


    
    
}
