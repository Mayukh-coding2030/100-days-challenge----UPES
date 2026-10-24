//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include<stdio.h>
int main(){
    int arr[100];
    int n,k,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    if(n<=0 || n > 100){
        printf("Invalid Array Size");
    }
    printf("Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value K: ");
    scanf("%d",&k);

    if(k<=0 || k > 100){
        printf("Invalid value of k");
        return 0;
    }
    int sum = 0;
    for(i=0;i<k;i++){
        sum += arr[i];
    }
      int maxSum = sum;
      for(i=k;i<n;i++){
        sum = sum + arr[i] - arr[i - k];

        if(sum > maxSum){
            maxSum = sum;
        }
      }
      printf("Maximum sum = %d",maxSum);
    return 0;
}