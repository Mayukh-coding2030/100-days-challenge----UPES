//Q37: Write a program to find the LCM of two numbers.
#include<stdio.h>
int main(){
    int n,m,a,b,hcf,lcm;
    printf("Enter the two numbers: ");
    scanf("%d %d",&n,&m);
    a = n;
    b = m;
    while(m!=0){
        hcf = n % m;
        n = m;
        m = hcf;
    }
    hcf = n;
    lcm = (a * b) / hcf;
    printf("LCM = %d",lcm);
    return 0;
}