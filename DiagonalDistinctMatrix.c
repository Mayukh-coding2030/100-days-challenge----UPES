//Q77: Check if the elements on the diagonal of a matrix are distinct.

#include<stdio.h>
int main(){
    int r,c,i,j;
    int m[100][100];
    int distinct = 1;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d",&r,&c);
    printf("Enter the elements iof matrix: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&m[i][j]);
        }
    }
    if(r!=c){
        distinct = 0;
    }
    else{
        for(i=0;i<r;i++){
            for(j=i+1;j<r;j++){
                if(m[i][i]==m[j][j]){
                    distinct = 0;
                    break;
                }
            }
            if(distinct==0)
            break;
        }
    }
    if(distinct==1)
    printf("True\n");
    else printf("False\n");
    return 0;
}