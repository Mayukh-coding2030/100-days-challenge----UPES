//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include<stdio.h>
int main(){
    int n,k,i,j;
    int arr[100];
    printf("Enter the size of array: ");
    scanf("%d",&n);
       if(n<=0 || n > 100){
        printf("Invalid array size");
       }
    printf("Enter the elements of array:  ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d",&k);
     if(k<=0 || k > 100){
        printf("Invalid value of k");
        return 0;
     }
     for(i=0;i<= n- k;i++){
        int firstNegative = 0;
         for(j-i;j<i + k;j++){
            if(arr[j] < 0){
                firstNegative = arr[j];
                break;
            }
         }
         printf("%d ", firstNegative);
     }
    return 0;
}