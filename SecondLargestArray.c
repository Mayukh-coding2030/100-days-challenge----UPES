//Q69: Find the second largest element in an array.

#include<stdio.h>
int main(){
    int n, a[100], i, largest, second;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    largest = second = -2147483647 - 1;
    for(i=0;i<n;i++){
        if(a[i] > largest){
            second = largest;
        largest = a[i];
    }
    else if(a[i] > second && a[i] < largest){
        second = a[i];
    }
  } 
  if(second == -2147483647 - 1){
    printf("Second largest element does not exist");
  } else{
    printf("Second largest element = %d", second);
  }
    return 0;
}