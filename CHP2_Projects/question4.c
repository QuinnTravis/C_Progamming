#include <stdio.h>

int main(){

    float amount;
    printf("Enter an amount: ");
    scanf("%f",&amount);
    float added_tax = 1.05 * amount;
    printf("With tax added: $%.2f \n",added_tax);

    return 0;
}