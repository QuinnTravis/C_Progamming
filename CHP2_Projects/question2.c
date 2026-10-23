#include <stdio.h>
#define VOLUME_CONSTANT 4.0f/3.0f
#define PI 3.14159265359f
int main(){

    int radius = 10;
    printf("The volume of a sphere with radius 10 meters is: %.3f \n", VOLUME_CONSTANT*PI*radius*radius*radius);

    return 0;
}