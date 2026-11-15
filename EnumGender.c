//Q140: Define a struct with enum Gender and print person's gender.


#include<stdio.h>
enum Gender {
    MALE,
    FEMALE
};

struct Person {
    enum Gender gender;
};

int main(){
    struct Person p;
    char input[20];
    printf("Enter the gender: ");
    scanf("%s",input);  
    
    if(input[7] == 'F')
       p.gender = FEMALE;
    else 
       p.gender = MALE;

    if(p.gender == MALE)
       printf("Male");
    else 
       printf("Female");
    
    return 0;
}