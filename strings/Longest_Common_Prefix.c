char * merge(char *s1, char *s2)
{
    int minlen = strlen(s1) < strlen(s2) ? strlen(s1):strlen(s2);
    char *res = (char *)calloc(minlen+1, sizeof(char));
    for(int i=0; i<minlen; i++)
    {
        if(s1[i] != s2[i])
        {
            res[i] = '\0';
            break;
        }
            res[i] = s1[i];
    }

    return res;

}

char* divide(char **strs,int first,int last)
{
    if(first == last)
    {
        return strs[first];
    }
    else
    {
        int mid = first+(last-first)/2;
        char *lcpleft = divide(strs,first,mid);
        char *lcpright = divide(strs,mid+1,last); 
        char *res = merge(lcpleft,lcpright);
        return res;
    }
}

char* longestCommonPrefix(char** strs, int strsSize) {
 if( strs == NULL || strsSize ==0) return "";
 return divide(strs,0,strsSize-1);
}
