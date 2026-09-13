//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F
#include<stdio.h>
int main(){
    int P;
    printf("Enter the percentage :");
    scanf("%d",&P);
    if(P>=90 && P<=100){
        printf("Grade A");
    }
    else if(P>=80){
        printf("Grade B");
    }
    else if(P>=70){
        printf("Grade C");
    }
    else if(P>=60){
        printf("Grade D");
    }
    else if(P>=0){
        printf("Grade F");
    }
    return 0;
}