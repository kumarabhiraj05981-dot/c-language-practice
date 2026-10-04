/*Q6. Nested If — Leap Year

User se year input lo aur determine karo ki wo Leap Year hai ya nahi.

Specially 100 aur 400 wale cases bhi correctly handle hone chahiye.*/

#include <stdio.h>
int main() {
    int year;

    printf("Enter your year: ");
    scanf("%d",&year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d is a leap year.\n", year);
            }else {
                printf("%d is not a leap year.\n", year);
            }
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}