//Q80: Multiply two matrices.

#include<stdio.h>
int main(void){
    int r1,r2,c1,c2,i,j,k;
    int p[100][100],q[100][100],m[100][100];
    scanf("%d %d",&r1,&c1);
      for(i=0;i<r1;i++)
       for(j=0;j<c1;j++)
        scanf("%d",&p[i][j]);

    scanf("%d %d",&r2,&c2);
       for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
          scanf("%d",&q[i][j]);

    if(c1!=r2){
        printf("Multiplication not possible");
        return 0;
    }

    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            m[i][j] = 0;
            for(k=0;k<c1;k++)
              m[i][j] += p[i][k] * q[k][j];
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++)
           printf("%d ",m[i][j]);
        printf("\n");
    }
    return 0;
}