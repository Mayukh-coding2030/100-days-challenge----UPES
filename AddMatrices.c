//Q75: Add two matrices.

#include<stdio.h>
int main(){
    int r,col,i,j;
    int a[50][50],b[50][50],c[50][50];
    printf("Enter the rows and columns: ");
    scanf("%d %d",&r,&col);
    printf("Enter the elements of  first matrix: ");
    for(i=0;i<r;i++){
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second matrix: ");
    for(i=0;i<r;i++){
        for(j=0;j<col;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<col;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum of Matrices:\n");
    for(i=0;i<r;i++){
        for(j=0;j<col;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}