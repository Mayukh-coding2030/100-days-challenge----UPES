//Q145: Return a structure containing top student's details from a function.


#include<stdio.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student findTopStudent(struct Student s[], int n){
    int i;
    int top = 0;

    for(i = 1; i < n; i++){
        if(s[i].marks > s[top].marks){
            top = i;
        }
    }
    return s[top];
}
int main(){
      struct Student students[3];
      struct Student topStudent;
      int i;

      for(i = 0; i < 3; i++){
        printf("Enter name, roll  umber and marks: ");
        scanf("%s %d %d", students[i].name,
        &students[i].roll_no, &students[i].marks);
      }

      topStudent = findTopStudent(students, 3);

      printf("\nTop Student: %s | Roll: %d | Marks: %d\n",
    topStudent.name, topStudent.roll_no, topStudent.marks);

    return 0;
}