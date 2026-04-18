int lengthOfLastWord(char* s) {

     int n =strlen(s);
     int p = n-1;
     int length = 0;
     while(p >= 0 && s[p] == ' ')
        p--;
     while(p >= 0 && s[p] != ' '){
        p--;
        length++;
     }
     return length;
}
