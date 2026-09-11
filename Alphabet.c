//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character :");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ){
        printf("It is a Vowel");
    }
    else{
        printf("It is a Consonant");
    }
    return 0;
}