#include <stdio.h>


int gcd(int numerator, int denominator){

    if ( denominator == 0 ){
        return numerator;
    }
    return gcd(denominator,numerator%denominator);

}

int main(){

    int numerator,denominator;
    printf("Enter a fraction: ");
    scanf("%d/%d",&numerator,&denominator);
    int divisor = gcd(numerator,denominator);
    printf("In lowest terms: %d/%d \n", numerator/divisor, denominator/divisor);
}