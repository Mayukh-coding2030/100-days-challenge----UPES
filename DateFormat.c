//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include<stdio.h>
int main(){
      char date[30];
      char day[3], month[3], year[5];

      scanf("%2s", day);
      getchar();
      scanf("%2s", month);
      getchar();
      scanf("%4s", year);

      if(month[0] == '0' && month[1] == '4')
    printf("%s-Apr-%s\n", day,year);
    else 
    printf("Invalid month\n");
    return 0;
}