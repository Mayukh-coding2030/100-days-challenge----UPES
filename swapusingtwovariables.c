// Q7: Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the value of x :");
    scanf("%d",&x);
    printf("Enter the value of y :");
    scanf("%d",&y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After Swaping :\n");
    printf("x= %d\n", x);
    printf("y = %d\n", y);
    return 0;
}