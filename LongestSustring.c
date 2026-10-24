//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    int i,j,length,maxlength = 0, start = 0;
    int found;
    printf("Enter a string: ");
    scanf("%999s",s);

    length = strlen(s);
     for(i=0;i<length;i++){
        found = 0;

        for(j=start;j<i;j++){
            if(s[j] == s[i]){
                start = j + 1;
                found = 1;
                break;
            }
        }
        if(found == 0){
            if(i - start + 1 > maxlength){
                maxlength = i - start + 1;
            }
        }
     }
     printf("Longest substring: %d", maxlength);
    return 0;
}