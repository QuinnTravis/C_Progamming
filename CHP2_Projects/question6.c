#include <stdio.h>

int main(){


    int x;
    printf("Enter value of x: ");
    scanf("%d",&x);
    int value = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    printf("The value of the polynomial is: %d \n", value);

    
    return 0;



}