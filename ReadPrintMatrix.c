//Q71: Read and print a matrix.

#include<stdio.h>
    int main(){
    int a[10][10], i, j, r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (i = 0; i < r; i++){
       for (j = 0; j < c; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

































/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/