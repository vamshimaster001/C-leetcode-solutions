char* intToRoman(int num) {
    char *symbols[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int size = sizeof(symbols)/sizeof(symbols[0]);
    int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    char *result = (char *)malloc(sizeof(char)*20);
    result[0] = '\0';
    for(int i =0; i< size && num >0;i++)
    {
        int count = num / values[i];
        while(count > 0)
        {
            strcat(result,symbols[i]);
            count--;
        }
        num = num % values[i];
    } 
    return result;
}
