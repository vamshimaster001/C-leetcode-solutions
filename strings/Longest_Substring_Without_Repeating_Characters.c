int maximum(int a , int b)
{
    return a > b ? a : b;
}

int lengthOfLongestSubstring(char* s) {
    int first = 0 ;
    int n = strlen(s);
    int hashmap[256];
    int result = 0;
    memset(hashmap,0,sizeof(hashmap));
    for(int i =0; i < n ; i++)
    {
        if(hashmap[s[i]] > 0)
        {
            first = maximum(first,hashmap[s[i]]);
        }
        hashmap[s[i]] = i+1; 
        result = maximum(i-first+1, result);
    }
    return result;
}
