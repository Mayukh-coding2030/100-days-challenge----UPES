//Q56: Read and print elements of a one-dimensional array.

#include<stdio.h>
int main(){
    int arr[100],m,j;
    printf("Enter the element: ");
    scanf("%d",&m);
    for(j=0;j<m;j++){
        scanf("%d",&arr[j]);
    }
    for(j=0;j<m;j++){
        printf("%d", arr[j]);
    }
    return 0;
}