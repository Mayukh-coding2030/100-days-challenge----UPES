//Q30: Write a program to reverse a given number.
#include<stdio.h>
int main(){
    int n,reverse = 0,remainder;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0){
        remainder = n % 10;
        reverse = reverse *10 + remainder;
        n = n / 10;
    }
    printf("%d",reverse);
    return 0;
}


































/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/