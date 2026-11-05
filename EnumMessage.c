//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include<stdio.h>
#include<string.h>
enum Status{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main(){
    char input[20];
    enum Status status;

    printf("Enter the code:  ");
    scanf("%s", input);

     if(strcmp(input, "SUCCESS") == 0)
     status = SUCCESS;
     else if(strcmp(input, "FAILURE") == 0)
     status = FAILURE;
     else
       status = TIMEOUT;

    switch(status){
        case SUCCESS:
        printf("Operation Succesful");
        break;

        case FAILURE:
        printf("Operation failed");
        break;

        case TIMEOUT:
        printf("Operation time out");
        break;
    }

    return 0;
}