#include <stdio.h>

int main(){


    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d",&amount);
    int twenty = amount / 20;
    int remainder = amount % 20;
    int ten = remainder / 10;
    remainder = remainder % 10;
    int five = remainder / 5;
    remainder = remainder % 5;
    int one = remainder / 1;
    remainder = remainder % 1;
    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);

    return 0;
}