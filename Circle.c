//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main(){
    int radius;
    printf("Enter the radius :");
    scanf("%d",&radius);
    int pi = 3.14;
    float area,circumference;
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("Area = %f\n",area);
    printf("Circumference = %f\n",circumference);
    return 0;
}
