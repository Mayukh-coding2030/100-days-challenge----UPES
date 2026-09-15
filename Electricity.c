//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit
#include<stdio.h>
int main(){
    int unit,Bill;
    printf("Enter the unit : ");
    scanf("%d",&unit);
    if(unit<=100){
        Bill = unit * 5;
        printf("Bill = Rs %d",Bill);
    }
    else if(unit<=200){
        Bill = (100 * 5) + (( unit-100) * 7);
        printf("Bill = Rs %d",Bill);
    }
    else if(unit<=300){
        Bill = (100 * 5) + (100 * 7) + ((unit-200) * 10);
        printf("Bill =  Rs %d",Bill);
    }
    else{
        Bill = unit * 12;
        printf("Bill = Rs %d",Bill);
    }
    return 0;
}