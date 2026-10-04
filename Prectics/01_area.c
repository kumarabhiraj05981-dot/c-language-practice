#include <stdio.h>
int main() {
    int area, length, breadth;
    printf("Enter Length: ");
    scanf("%d",&length);
    printf("Enter Breadth: ");
    scanf("%d",&breadth);
    area = length * breadth;
    printf("Area of Rectangle: %d",area);
    return 0;
}