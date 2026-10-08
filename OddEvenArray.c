//Q59: Count even and odd numbers in an array.

#include<stdio.h>
int main(){
     int n,i;
     int a[100];
     int even = 0, odd = 0;
     printf("Enter the number of elements: ");
     scanf("%d", &n);
     printf("Enter the elements: ");
     for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0) 
           even ++;
        else 
           odd++;
     }
     printf("Number of even numbers = %d\n", even);
     printf("Number of odd numbers = %d\n", odd);
    return 0;
}