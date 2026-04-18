char* countAndSay(int n) {

    char *s = (char *)malloc(sizeof(char)*5000);
    strcpy(s,"1");
    for(int i = 2 ; i <= n; i++)
    {
        int k = 0;
        char *t = (char *)malloc(5000 * sizeof(char));
        for(j = 0 ;j < strlen(s);)
        {
            int count = 0;
            while(s[j] == s[j+count]) count++;
            t[k++] = (char)count+'0';
            t[k++] = s[j];
            j += count;
        }
        t[k] = '\0';
        free(s);
        s = t ;
    }
 return s;
}
         
        
