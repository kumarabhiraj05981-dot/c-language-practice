#include <stdio.h>
int main() {
    int principal, rate, time,Amount;
    float simple_interest;
    printf("Enter principal amount: ");
    scanf("%d", &principal);

    printf("Enter rate of interest: ");
    scanf("%d", &rate);

    printf("Enter time in years: ");
    scanf("%d", &time);

    simple_interest = (principal * rate * time) / 100.0;
    printf("Simple Interest = %.2f\n", simple_interest);

    Amount = principal + simple_interest;
    printf("Total Amount = %.2f\n", Amount);
    
    return 0;
}