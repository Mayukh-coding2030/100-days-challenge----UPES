//Q6: Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the value of x :");
    scanf("%d",&x);
    printf("Enter the value of y :");
    scanf("%d",&y);
    int swap;
    swap = x;
    x = y;
    y = swap;
    printf(" After Swap x =%d y =%d",x,y);
    return 0;
}