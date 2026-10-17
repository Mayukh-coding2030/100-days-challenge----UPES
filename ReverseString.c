//Q85: Reverse a string.

#include<stdio.h>
int main(){
    char str[100], code;
    int i = 0,j;
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n'){
        i++;
    }
    j = i -1;
    i = 0;
    while(i<j){
        code = str[i];
        str[i] = str[j];
        str[j] = code;
        i++;
        j--;
    }
    printf("%s\n",str);
    return 0;
}