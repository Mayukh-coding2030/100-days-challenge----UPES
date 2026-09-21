//Q40: Write a program to find the 1’s complement of a binary number and print it.
#include<stdio.h>
int main(){
    long long n,digit,result=0,place=1;
    printf("Enter a binary number: ");
    scanf("%lld",&n);
    while(n>0){
        digit = n% 10;
        if(digit==0) digit = 1;
        else digit = 0;
        result = result + digit * place;
        place = place * 10;
        n = n / 10;
    }
    printf("1's Complement = %lld", result);
    return 0;
}






















/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/