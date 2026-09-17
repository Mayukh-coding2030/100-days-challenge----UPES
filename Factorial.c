//Q29: Write a program to calculate the factorial of a number.
#include<stdio.h>
int main(){
    int n,factorial=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int a=1;a<=n;a++){
        factorial = factorial * a;
    }
    printf("%d",factorial);
    return 0;
}