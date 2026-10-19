//Q95: Check if one string is a rotation of another.

#include<stdio.h>
#include<string.h>
int main(){
    char str1[200], str2[100], code[200];
    scanf("%99s",str1);
    scanf("%99s",str2);

    if(strlen(str1) != strlen(str2)){
        printf("Not Rotation");
    } else{
        strcpy(code, str1);
        strcat(code, str1);

        if(strstr(code, str2) != NULL)
        printf("Rotation");
        else
        printf("Not Rotation");
    }
    return 0;
}