#include <stdio.h>
#define VOLUME_CONSTANT 4.0f/3.0f
#define PI 3.14159265359f
int main(){

    int radius;
    printf("Enter the radius of the sphere in meters: ");
    scanf("%d", &radius);
    printf("The volume of a sphere with radius %d meters is: %.3f \n", radius, VOLUME_CONSTANT*PI*radius*radius*radius);

    return 0;
}