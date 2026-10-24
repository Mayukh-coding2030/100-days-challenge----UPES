//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include<stdio.h>
int main(){
    int n,k,i,j;
    int arr[100];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    if(n<=0 || n > 100){
        printf("Invalid size of array");
    }
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d",&k);
    if(k<=0 || k > 100){
        printf("Invalid value of k");
        return 0;
    }
    for(i=0;i<=n-k;i++){
        int max = arr[i];

        for(j=i+1;j<i;j++){
            if(arr[i] > max){
                max = arr[j];
            }
        }
        printf("%d ",max);
    }
    return 0;
}