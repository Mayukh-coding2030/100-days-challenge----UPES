//Q28: Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main(){
    int n,j,product=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(j=2;j<=n;j+=2){
        product = product * j;
    }
    printf("Product = %d",product);
    return 0;
}