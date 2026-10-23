#include <stdio.h>

int main(){

    int num;
    printf("Enter a three-digit number: ");
    scanf("%d",&num);
    int d1 = num % 100;
    int d2 = num % 10;
    int d3 = num / 10;

    printf("The reversal is: %d\n", d1*100 + d2*10 + d3);




    return 0;
}