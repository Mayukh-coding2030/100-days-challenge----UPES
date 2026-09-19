//Q32: Write a program to check if a number is a palindrome.
#include<stdio.h>
int main(){
    int n, original,reversed=0,remainder;
    printf("Enter the number: ");
    scanf("%d",&n);
    original = n;
    while(n!=0){
        remainder = n %10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if(original == reversed){
        printf("Pallindrome");
    }
    else{
        printf("Not pallindrome");
    }
     printf("\n");
    return 0;
}