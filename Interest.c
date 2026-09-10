//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main(){
    float principal,rate,time,Amount;
    printf("Enter the Principal Amount :");
    scanf("%f",&principal);
     printf("Enter the Rate :");
    scanf("%f",&rate);
     printf("Enter the Time :");
    scanf("%f",&time);
    int SimpleInterest;
    float CompoundInterest;
    SimpleInterest = (principal * rate * time ) / 100;
    Amount = principal * pow((1 + rate / 100), time);
    CompoundInterest = Amount - principal;
    printf("SimpleInterest = %d\n", SimpleInterest);
    printf("CompoundInterest = %.2f\n",CompoundInterest);
    return 0;
}