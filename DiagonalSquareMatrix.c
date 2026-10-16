//Q78: Find the sum of main diagonal elements for a square matrix.

#include<stdio.h>
int main(void){
    int r,c,i,j,sum=0;
    int a[100][100];
    printf("Enter the rows and columbns of matrix: ");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        sum += a[i][i];
    }
    printf("%d\n",sum);
    return 0;
}