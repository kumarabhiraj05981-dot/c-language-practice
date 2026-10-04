// if (condition1) {
//     // condition1 TRUE
// }
// else if (condition2) {
//     // condition2 TRUE
// }
// else {
//     // koi bhi condition TRUE nahi
// }




#include <stdio.h>

int main() {

    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade A+\n");
    }
    else if (marks >= 80) {
        printf("Grade A\n");
    }
    else if (marks >= 70) {
        printf("Grade B\n");
    }
    else if (marks >= 60) {
        printf("Grade C\n");
    }
    else {
        printf("Grade F\n");
    }

    return 0;
}