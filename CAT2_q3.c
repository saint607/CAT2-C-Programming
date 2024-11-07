#include <stdio.h>

int main() {
    float hours, hourly_wage, gross_pay, taxes, net_pay;
    
    // Request input 
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);

    // Gross pay calculation
    if (hours <= 40) {
        gross_pay = hours * hourly_wage;
    } else {
        gross_pay = (40 * hourly_wage) + ((hours - 40) * hourly_wage * 1.5);
    }
    if (gross_pay <= 600) {
        taxes = gross_pay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.20);
    }
     // Calculate the net pay
    net_pay = gross_pay - taxes;

    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}
