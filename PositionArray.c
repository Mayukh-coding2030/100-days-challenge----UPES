//Q66: Insert an element in a sorted array at the appropriate position.

#include<stdio.h>
int main(){
    int n,a[100],element,i,pos;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the sorted array element: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the lement to insert: ");
    scanf("%d", &element);
    pos = 0;
    while(pos<n && a[pos]<element){
        pos++;
    }
    for(i=n;i>pos;i--){
        a[i] = a[i-1];
    }
    a[pos] = element;
    n++;
    printf("Array after insertion: ");
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    return 0;
}