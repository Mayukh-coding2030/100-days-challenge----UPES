//Q142: Store details of 5 students in an array of structures and print all.


#include<stdio.h>
struct Student{
    char name[50];
    int roll_no;
    int marks;
};

int main(){
     struct Student s[5];
     int i;

     for(i = 0; i < 5; i++){
        printf("Enter details of Student %d:\n",i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%d", &s[i].marks);

        printf("\n");
     }

     printf("Name\t\tRoll\tMarks\n");
     printf("-------------------------------------\n");

     for(i = 0; i < 5; i++){
        printf("%-15s %d\t%d\n",
        s[i].name, s[i].roll_no, s[i].marks);
     }

    return 0;

}