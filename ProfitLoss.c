//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main(){
    int CP,SP,profit,loss;
    float percentage;
    printf("Enter The Cost price and Selling Price :");
    scanf("%d %d",&CP,&SP);
    if(CP==SP){
        printf("No profit or loss");
    }
    else if(CP<SP){
        printf("Profit");
        profit = SP - CP;
         percentage = (float)profit / CP * 100;
         printf(" percentage = %.2f",percentage);
    }
    else{
        printf("Loss");
         loss = CP - SP;
         percentage = (float)loss / CP * 100;
         printf("percentage = %.2f",percentage);
    }
    return 0;
}