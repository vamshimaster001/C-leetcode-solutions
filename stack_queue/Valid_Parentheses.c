bool isValid(char* s) {

    struct pairs
    {
        char close;
        char open;
        UT_hash_handle hh;
    };

    struct pairs *head = NULL, *str;
    struct pairs m1 = {')','('}, m2 = {']','['}, m3 = {'}','{'};

    HASH_ADD(hh,head,close,sizeof(char),&m1);
    HASH_ADD(hh,head,close,sizeof(char),&m2);
    HASH_ADD(hh,head,close,sizeof(char),&m3);
    
    int n = strlen(s);
    char *stack = (char *)malloc(sizeof(char)*n);
    int top = -1;
    struct pairs *found = NULL;

    for( int i = 0; i < n; i++)
    {
        if (s[i]=='(' || s[i] == '[' || s[i] == '{')
        {
          stack[++top] = s[i];
        }
        else
        {
           if (top < 0)
           {
                free(stack);
                return false;
           } 
           HASH_FIND(hh,head,&s[i],sizeof(char),found);
           if(found && found->open == stack[top]) 
           {
                top--;
                continue;
                
           }
            free(stack);
            return false; 
        }
    }
    return top < 0;
}
