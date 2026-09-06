//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){
    int l,b;
    printf("Enter the length :");
    scanf("%d",&l);
    printf("Enter the breadth :");
    scanf("%d",&b);
    int area,perimeter;
    area = l * b;
    perimeter = 2*(l + b);
    printf("Area = %d\n",area);
    printf("Perimeter = %d\n",perimeter);
    return 0;
}

































