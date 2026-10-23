#include <stdio.h>

int main(){

    int num;
    printf("Enter a two-digit number: ");
    scanf("%d",&num);
    int d1 = num % 10;
    int d2 = num / 10;

    printf("The reversal is: %d\n", d1*10 + d2);


    return 0;
}