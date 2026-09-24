//Q48: Write a program to print the following pattern:
//1
//12
//123
//1234
//12345

#include<stdio.h>
int main(){
    int n;
    printf("Enter the rows: ");
    scanf("%d",&n);
    for(int r=1;r<=n;r++){
        for(int p=1;p<=r;p++ ){
            printf("%d",p);
        }
        printf("\n");
    }
    return 0;
}