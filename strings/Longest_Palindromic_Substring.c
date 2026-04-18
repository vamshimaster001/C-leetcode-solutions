char* longestPalindrome(char* s) {
    if( !s || strlen(s) == 0)
        return s;
    
    int stringLength = strlen(s);
    char *palindromelen(char *s, int i,int j)
    {
        while( i >= 0  && j < stringLength && s[i] == s[j])
        {
          i--;
          j++;
        }
        char *p = malloc(sizeof(char)*j-i);
        memcpy(p,&s[i+1],j-i-1);
        p[j-i-1] = '\0';
        return p;
    }

    int start = 0 , len = 0 ;
    
    for (int i = 0; i < stringLength ; i++)
    {
        char *odd = palindromelen(s,i,i);
        char *even = palindromelen(s,i,i+1);
        int max_len = strlen(odd) > strlen(even) ? strlen(odd): strlen(even);
        if (max_len > len)
        {
            start = i - (maxlen-1) / 2;
            len = max_len;
        }
        free(odd);
        free(even);
    }
}
