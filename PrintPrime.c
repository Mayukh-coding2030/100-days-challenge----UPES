//Q55: Write a program to print all the prime numbers from 1 to n.

#include<stdio.h>
int main (){
    int n,a,b,flag;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(a = 2;a<=n;a++){
        flag = 1;
        for(b=2;b<a;b++){
            if(a%b == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            printf("%d", a);
        }
    }
    return 0;
}
































/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/