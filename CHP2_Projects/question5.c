#include <stdio.h>

int main(){


    int x;
    printf("Enter value of x: ");
    scanf("%d",&x);
    int poly5 = 3*x*x*x*x*x;
    int poly4 = 2*x*x*x*x;
    int poly3 = -5*x*x*x;
    int poly2 = -1*x*x;
    int poly1 = 7 * x;
    printf("The value of the polynomial is: %d \n", poly5 + poly4 + poly3 + poly2 + poly1 - 6);

    
    return 0;



}