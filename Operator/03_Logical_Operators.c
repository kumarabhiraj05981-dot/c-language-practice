#include <stdio.h>

int main() {

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18 && age <= 60) { // Check if age is between 18 and 60
        printf("You are eligible.\n"); 
    }

    if (age < 18 || age > 60) { // Check if age is less than 18 or greater than 60
        printf("You are not in the eligible age range.\n");
    }

    return 0;



    //   Logical Operators

    //    &&  → AND
    //   ||  → OR
    //   !   → NOT
}