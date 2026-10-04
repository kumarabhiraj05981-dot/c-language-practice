/*Q2. Arithmetic Operators

User se length aur breadth input lekar rectangle ka:

Area
Perimeter

calculate karo.*/


#include <stdio.h>
int main() {
    float length, breadth, area, perimeter;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of rectangle: %.2f\n", area);
    printf("Perimeter of rectangle: %.2f\n", perimeter);
}