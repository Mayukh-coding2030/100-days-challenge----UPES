//Q97: Print the initials of a name.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i, start=0,end;
    fgets(str, sizeof(str), stdin);
    if(str[0] != ' ' && str[0] != '\n')
    printf("%c.", str[0]);

    for(i=1;str[i] != '\0'; i++){
        if(str[i] == ' ' && str[i + 1] != ' ' &&
        str[i + 1] != '\n' && str[i + 1] != '\0'){
            printf("%c.", str[i + 1]);
        }
    }
    return 0;
}