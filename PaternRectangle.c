//Q46: Write a program to print the following pattern:
/*****
*****
*****
*****
*****/
#include<stdio.h>
int main(){
    int l,m;
    printf("Enter the rows and columns: ");
    scanf("%d %d",&l,&m);
    for(int i=1;i<=l;i++){
        for(int j=1;j<=m;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}