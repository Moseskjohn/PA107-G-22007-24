
#include <stdio.h>
#include <stdlib.h>

int main() {
    int age, income;

    // Loan eligibility check
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your income: ");
    scanf("%d", &income);

    if (age >= 21 && income >= 12000) {
        printf("Congratulations! You qualify for a loan.\n");
    } else {
        printf("Sorry, you do not qualify for a loan.\n");
        }

    return 0;
}