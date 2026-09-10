//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the integer :");
    scanf("%d",&n);
    if(n%2==0){
        printf("It is Even number");
    }
    else{
        printf("It is an Odd number");
    }
    return 0;
}