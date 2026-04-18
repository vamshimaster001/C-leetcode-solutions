int strStr(char* haystack, char* needle) {

    int n = strlen(haystack);
    int s = strlen(needle);
    
    if (s == 0) return 0;

    for(int i = 0; i <= n-s; i++)
    {
        int j = 0;

        while(j < s && haystack[i+j] == needle[j])
        {
            j++;
            if (j == s)
                return i;
        }
    }   
   return -1;
}

