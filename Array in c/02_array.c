#include <stdio.h>
int main() {
    int marks[5];

    printf("Enter marks of 5 students: \n");
    // scanf("%d", &marks[0]);
    // printf("Enter marks of 2 students: \n");
    // scanf("%d", &marks[1]);
    // printf("Enter marks of 3 students: \n");
    // scanf("%d", &marks[2]);
    // printf("Enter marks of 4 students: \n");
    // scanf("%d", &marks[3]);
    // printf("Enter marks of  students: \n");
    // scanf("%d", &marks[4]);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }
     for (int i = 0; i < 5; i++) {
        printf("The value of marks at indevx %d is %d\n",i,marks[i]);
    }

    // printf("index 0 marks %d\n",marks[0]);
    // printf("index 1 marks %d\n",marks[1]);
    // printf("index 2 marks %d\n",marks[2]);
    // printf("index 3 marks %d\n",marks[3]);
    // printf("index 4 marks %d\n",marks[4]);
   
   
    return 0;
}