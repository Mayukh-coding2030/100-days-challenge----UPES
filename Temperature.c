//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
    float celsius, fahrrenheit;
    printf("Enter the Temperature in Celsius:");
    scanf("%f",&celsius);
    fahrrenheit = (9.0/5.0)*celsius + 32;
    printf("Temperature in Fahrrenheit is : %.2f\n",fahrrenheit);
    return 0;
}
