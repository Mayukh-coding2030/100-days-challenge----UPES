//Q61: Search for an element in an array using linear search.

#include<stdio.h>
int main(){
    int n,i,key;
    int a[100];
    int found = -1;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter the  array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element found: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
          found = i;
          break;
        }
    }
        printf("%d", found);
    return 0;
}