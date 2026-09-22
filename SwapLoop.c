//Q41: Write a program to swap the first and last digit of a number.
#include<stdio.h>
int main(){
    int n,first,last,digits,power,middle,result;
    printf("Enter the number: ");
    scanf("%d",&n);
    last = n % 10;
    digits = 0;
    int alpha = n;
    while(alpha!=0){
        digits++;
        alpha = alpha / 10;
    }
        power = 1;
        for(int i=1;i<digits;i++){
            power = power * 10;
        }
        first = n / power;
        middle = (n % power) / 10;
        result = last * power + middle * 10 + first;
        printf("%d",result);
    return 0;
}