//Q43: Write a program to check if a number is a strong number.
#include<stdio.h>
int main(){
    int n,beta,digit,fact,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    beta = n;
    while(beta>0){
        digit = beta % 10;
        fact = 1;
        for(int i =1;i<=digit;i++){
            fact = fact * i;
        }
        sum = sum + fact;
        beta = beta / 10;
    }
    if(sum==n) printf("Strong Number");
    else printf("Not a Strong Number");
    return 0;
}