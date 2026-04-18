int longestValidParentheses(char* s) {

    int top = -1;
    int n = strlen(s);
    char *stack = (char *)malloc(sizeof(char)*(n+1));
    int count = 0;
    int maxcount = 0;
    stack[++top] = -1;
    for (int i = 0; i < n ;i++)
    {
        if(s[i] == '(')
        {
            stack[++top] = i;
        }
        else
        {
            top--;
            if(top < 0)
            {
                stack[++top] = i ;
            }
        }



    }
    return maxcount;
}
