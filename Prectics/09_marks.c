#include <stdio.h>

int main() {
    int math, english, science, social_studies, hindi, total;
    float average;

    printf("Enter marks for Math: ");
    scanf("%d", &math);

    printf("Enter marks for English: ");
    scanf("%d", &english);

    printf("Enter marks for Science: ");
    scanf("%d", &science);

    printf("Enter marks for Social Studies: ");
    scanf("%d", &social_studies);

    printf("Enter marks for Hindi: ");
    scanf("%d", &hindi);


    printf("\n==============================\n");

    total = math + english + science + social_studies + hindi;
    average = (float)total / 5;

    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    printf("==============================\n");

    // Check failed subjects
    if (math < 33 || english < 33 || science < 33 ||
        social_studies < 33 || hindi < 33 || average < 40) {

        printf("You have failed the exam.\n");

        printf("\nFailed Subjects:\n");

        if (math < 33)
            printf("- Math\n");

        if (english < 33)
            printf("- English\n");

        if (science < 33)
            printf("- Science\n");

        if (social_studies < 33)
            printf("- Social Studies\n");

        if (hindi < 33)
            printf("- Hindi\n");

        if (average < 40)
            printf("- Overall Average is below 40\n");

    } else {
        printf("You have passed the exam.\n");
    }

    printf("==============================\n");

    return 0;
}