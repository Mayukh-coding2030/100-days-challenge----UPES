//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include<stdio.h>
int main(){
    int n,i;
    int nums[100];
    int visited[101] = {0};
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elemenst of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    for(i=0;i<n;i++){
        if(visited[nums[i]] == 1){
            printf("Repeated element: %d\n", nums[i]);
            return 0;
        }
        visited[nums[i]] = 1;
    }
    return 0;
}