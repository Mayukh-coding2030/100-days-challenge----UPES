//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the Character :");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("It is Uppercase Alphabet");
    }
       else if(ch>='a' && ch<='z'){
      printf("It is Lowercase Alphabet");
       }
    if(ch>='!' && ch<='*'){
        printf("It is a Special Character");
    }
    if(ch>='0' && ch<='9'){
        printf("It is a Digit");
    }
    return 0;
}