//Q98: Print initials of a name with the surname displayed in full.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i, start = 0, last = 0;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(i=0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            printf("%c.", str[start]);
            start = i + 1;
            last = start;
        }
    }
    printf("%s", str + last);
    return 0;
}