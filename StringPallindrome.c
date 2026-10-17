//Q86: Check if a string is a palindrome.

#include<stdio.h>
int main(){
    char str[100];
    int i = 0,j,flag = 1;
    fgets(str,sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n'){
        i++;
    }
    j = i - 1;
    i = 0;
    while(i<j){
        if(str[i] != str[j]){
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if(flag==1)
        printf("Palindrome\n");
        else printf("Not Palindrome\n");
    return 0;
}