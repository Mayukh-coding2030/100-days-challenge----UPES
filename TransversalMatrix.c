//Q79: Perform diagonal traversal of a matrix.

#include<stdio.h>
int main(){
    int r,c,i,j,d;
    int a[100][100];
    printf("Enter the rows and columns of matrix: ");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(d=0;d<r+c-1;d++){
        if(d%2==0){
            i = (d<r)?d:r-1;
            j = d - i;
            while(i>=0 && j<c){
                printf("%d ",a[i][j]);
                i--;
                j++;
            }
        }
        else{
            j = (d<c)?d:c - 1;
            i = d - j;
            while(j>=0 && i<r){
                printf("%d ",a[i][j]);
                i++;
                j--;
            }
        }
    }
    return 0;
}