//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

#include<stdio.h>
int main(){
    int n,k,i,j,temp;
    int arr[100];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    if(n<=0 || n > 100) printf("Invalid size of array");
    printf("Enter the elements of array: ");
    for(i=0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d",&k);
    if(k < 1|| k > n) printf("Invalid value of k");
       
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Kth Smallest element: %d", arr[k - 1]);
    return 0;
}