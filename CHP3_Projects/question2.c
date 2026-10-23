#include <stdio.h>

int main(){

    int itemNum, month,day,year;
    float unitPrice;
    printf("Enter item number: ");
    scanf("%d",&itemNum);
    printf("Enter unit price : ");
    scanf("%f",&unitPrice);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("Item        Unit        Purchase\n");
    printf("            Price       Date\n");
    printf("%d         $ %.2f    %.2d/%.2d/%.4d\n",itemNum,unitPrice,month,day,year);
    

    return 0;
}