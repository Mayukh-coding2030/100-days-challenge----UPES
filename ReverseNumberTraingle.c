//Q51: Write a program to print the following pattern:
   //5
   //45
  //345
 //2345
//12345

#include<stdio.h>
int main(){
    int p,q;
    for(p=5;p>=1;p--){
        for(q=1;q>1;q--){
            printf(" ");
        }
        for(q=p;q<=5;q++){
            printf("%d",q);
        }
        printf("\n");
    }
    return 0;
}