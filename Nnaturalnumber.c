//Q8: Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int sum;
    sum = n * (n + 1)/2;
    printf("Sum of natural numbers is = %d",sum);
    return 0;
}