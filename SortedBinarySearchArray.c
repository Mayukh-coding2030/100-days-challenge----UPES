//Q65: Search in a sorted array using binary search.

#include<stdio.h>
int main(){
    int n,key;
    printf("Enter the number: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    int low=0, high = n - 1;
    int mid, found = -1;
    while(low<=high){
        mid = low + (high - low) / 2;
        if(a[mid]==key){
            found = mid;
            break;
        }
        else if(a[mid]<key){
            low = mid + 1;
        }
        else high = mid - 1;
    }
      if(found!=-1)
      printf("Found at index %d\n", found);
      else printf("-1\n");
    return 0;
}