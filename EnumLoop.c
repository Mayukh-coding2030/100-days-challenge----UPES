//Q138: Print all enum names and integer values using a loop.

#include<stdio.h>
    enum Colour{
        RED,
        YELLOW,
        GREEN
    };

    int main(){
        enum Colour colours[3] = {RED,YELLOW,GREEN};
        const char *names[3]= {"RED","YELLOW","GREEN"};

        for(int i = 0; i < 3; i++){
            printf("%s=%d\n",names[i],colours[i]);
        }
        return 0;
    }