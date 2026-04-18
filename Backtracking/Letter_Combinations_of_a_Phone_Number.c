
struct letters
{
    char id;
    const char *value;
    UT_hash_handle hh;
};

void backtrack(struct letters** lettersHash, const char *digits,int index, char *path, int pathLen, char **combinations,int *returnSize)
{
    if(pathLen == strlen(digits))
    {
        combinations[*returnSize] = (char *)malloc((pathLen+1)* sizeof(char));
        strncpy(combinations[*returnSize], path, pathLen+1);
        (*returnSize)++;
        return;
    }

    struct letters *s;
    HASH_FIND(hh, *lettersHash,&digits[index],sizeof(char),s);
    const char *possibleletters = s->value;
    while(*possibletters)
    {
        path[pathLen] = *possibleletters;

        psobbile
    }








} 
char** letterCombinations(char* digits, int* returnSize) {

    if(strlen(digits) == 0)
    {
        *returnSize = 0;
        return NULL;
    }

    struct letters m1 = {'2',"abc"} , m2 = {'3',"def"}, m3 ={'4',"ghi"} , m4 ={'5',"jkl"}, m5 = {'6',"mno"}, m6 = {'7',"pqrs"}, m7 = {'8',"tuv"} , m8 = {'9',"wxyz"}, *s, *lettersHash = NULL;

HASH_ADD(hh,lettersHash,id,,sizeof(char),&m1);
char *path = (char *)calloc(5,sizeof(char)); 
char **combinations = (char **)malloc(1024* sizeof(char*));
*returnSize = 0;
backtrack(&lettershash,digits,0,path, 0, combinations, returnSize);
free(path);
HASH_CLEAR(hh,lettersHash);
return combinations;

}
