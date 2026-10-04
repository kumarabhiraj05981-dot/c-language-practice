#include <stdio.h>
int main() {
    float radius, height, volume;
    printf("Enter a radius: ");
    scanf("%f", &radius);
    printf("Enter a height: ");
    scanf("%f", &height);
    volume = 3.14 * radius * radius * height;
    printf("Volume of Cylinder: %.2f", volume);
    return 0;
}