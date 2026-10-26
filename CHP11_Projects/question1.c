#include <stdio.h>



void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){

    *twenties = dollars/20;
    int remainder = dollars % 20;
    *tens = remainder / 10;
    remainder %= 10;
    *fives = remainder/5;
    remainder %= 5;
    *ones = remainder / 1;
    remainder %= 1;
}

int main(){

    int dollars, twenty, ten, five, one;
    printf("Enter dollar amount: ");
    scanf("%d",&dollars);
    pay_amount(dollars, &twenty, &ten, &five, &one);
    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);

}