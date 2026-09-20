//Q36: Write a program to find the HCF (GCD) of two numbers.
#include<stdio.h>
int main(){
    int a,b,hcf;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    while(b!=0){
        hcf = a % b;
        a = b;
        b = hcf;
    }
        printf("HCF = %d ",a);
    return 0;
}