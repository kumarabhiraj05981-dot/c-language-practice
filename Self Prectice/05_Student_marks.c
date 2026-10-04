/*Q5. If-Else / Else-If

Student ke marks input lo aur percentage/average ke according result print karo:

90+ → Excellent
75–89 → Very Good
60–74 → Good
40–59 → Pass
<40 → Fail*/

#include <stdio.h>
int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Excellent");
    } else if (marks >= 75 && marks  <= 89) {
        printf("Very Good");
    } else if (marks >= 60 && marks <= 74) {
        printf("Good");
    } else if ( marks >= 40 && marks <= 59) {
        printf("Pass");
    }else {
        printf("Fail");
    }
}