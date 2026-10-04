/*Q4. Relational + Logical Operators

User se ek number lo aur check karo ki number:

10 se bada
20 se chhota
aur even hai ya nahi*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 10 && num < 20 && num % 2 == 0) {
        printf("Number is greater than 10, less than 20 and even.\n");
    }
    else if (num > 10 && num < 20 && num % 2 != 0) {
        printf("Number is greater than 10, less than 20 but odd.\n");
    }
    else {
        printf("All conditions are not satisfied.\n");
    }

    return 0;
}