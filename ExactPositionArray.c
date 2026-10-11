//Q67: Insert an element in an array at a given position.

#include<stdio.h>
int main(){
    int n, a[100], element, pos, i;
    printf("Enter size of Array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d",&element);
    printf("Enter position: ");
    scanf("%d",&pos);
    if(pos<1 || pos>n+1){
        printf("Invalid Operation");
    } else{
        for(i=n;i>=pos;i--){
            a[i] = a[i-1];
        }
        a[pos-1] = element;
        n++;
        printf("Array after insertion: ");
        for(i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    }
    return 0;
}