#include <stdio.h>

int main(){

    float loan_amount, interest_rate, monthly_payment;
    printf("Enter amount of loan: ");
    scanf("%f",&loan_amount);
    printf("Enter interest rate: ");
    scanf("%f",&interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f",&monthly_payment);
    float b1,b2,b3;
    float monthly_interest = interest_rate * 0.01 / 12;
    b1 = loan_amount + (loan_amount * monthly_interest) - monthly_payment;
    b2 = b1 + (b1 * monthly_interest) - monthly_payment;
    b3 = b2 + (b2 * monthly_interest) - monthly_payment;
    printf("Balance remaining after first payment: $%.2f \n",b1);
    printf("Balance remaining after second payment: $%.2f \n",b2);
    printf("Balance remaining after third payment: $%.2f \n",b3);
    return 0;
}