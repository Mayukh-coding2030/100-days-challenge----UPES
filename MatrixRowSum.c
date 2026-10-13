//Q73: Find the sum of each row of a matrix and store it in an array.

#include<stdio.h>
int main(){
    int r,c,i,j,sum[100];
    int a[100][100];
    printf("Enter the rows and columns of the matrix: ");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        sum[i]=0;
    for(j=0;j<c;j++){
        sum[i] += a[i][j];
    }
   }
   for(i=0;i<r;i++){
    printf("%d ", sum[i]);
   }
    return 0;
}