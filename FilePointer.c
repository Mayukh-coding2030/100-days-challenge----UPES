//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include<stdio.h>
int main(){
    FILE *fp;
    char filename[100];
    int ch;

    printf("Enter filename: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");
     if(fp == NULL){
        printf("Error: File does not exist!\n");
        return 1;
     } else{ printf("File opened successfully.\n");

     while((ch = fgetc(fp)) != EOF){
        putchar(ch);
     }
     fclose(fp);
   }
    return 0;
}