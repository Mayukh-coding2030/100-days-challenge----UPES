//Q74: Find the transpose of a matrix.

#include<stdio.h>
int main(){
    int r,c,i,j;
    int a[100][100];
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}