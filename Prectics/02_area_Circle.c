#include <stdio.h>

int main() {
    int redius;
    float area;
    printf("Enter Redius: ");
    scanf("%d",&redius);
    area = 3.14 * redius * redius;
    printf("Area of Circle: %f",area);
    return 0;
}