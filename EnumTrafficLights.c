//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include<stdio.h>
enum TrafficLight{
    RED,
    YELLOW,
    GREEN
};

int main(void){
      enum TrafficLight light = GREEN;

      switch(light){
        case RED:
        printf("Stop");
        break;

        case GREEN:
        printf("Go");
        break;
         
        case YELLOW:
        printf("Wait");
        break;

        default:
        printf("Ibnvalid traffic light");
      }

    return 0;
}