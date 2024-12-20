#include <stdio.h>

#define PAY_RATE 12.50
#define TAX_RATE_1 0.15
#define TAX_RATE_2 0.20
#define TAX_RATE_3 0.25
#define OVERTIME 40
#define OVERTIME_RATE 1.5

int main(){
    int hoursWorked = 0;
    printf("Enter the number of hours worked this week: ");
    scanf("%d", &hoursWorked);

    double totalPay = 0;

    if (hoursWorked <= 0){
        printf("You must work at least 1 hour.\n");
        return 1;
    }

    if (hoursWorked <= 40){
        totalPay = hoursWorked * PAY_RATE;
    }

    else {
        totalPay = (40 * PAY_RATE) + ((hoursWorked - 40) * (PAY_RATE * OVERTIME_RATE));
    }

    printf("Your total pay is $%.2f\n", totalPay);

    double totalTaxes = 0;

    if (totalPay <= 300){
        totalTaxes += totalPay * TAX_RATE_1;
    }

    else if (totalPay > 300 && totalPay <= 450){
        totalTaxes = (300 * TAX_RATE_1);
        totalTaxes += ((totalPay - 300) * TAX_RATE_2);
    }

    else {
        totalTaxes = (300 * TAX_RATE_1);
        totalTaxes += ((450 - 300) * TAX_RATE_2);
        totalTaxes += ((totalPay - 450) * TAX_RATE_3);
    }

    printf("Your total taxes are $%.2f\n", totalTaxes);

    double totalPayAfterTaxes = totalPay - totalTaxes;
    printf("Your total pay after taxes is $%.2f\n", totalPayAfterTaxes);

    return 0;
}
