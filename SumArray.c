//Q57: Find the sum of array elements.

#include<stdio.h>
int main(){
    int n,j,sum = 0;
    int a[100];
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%d",&a[j]);
        sum = sum + a[j];
    }
    printf("%d", sum);
    return 0;
}