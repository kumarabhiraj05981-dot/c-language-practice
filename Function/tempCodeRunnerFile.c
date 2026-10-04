#include <stdio.h>
#include<math.h>

double math_square();

double math_square(double square) {
    square = pow(square,2);
    return square;
}
int main() {
    double a = 5;
    double area_square = math_square(a);
    printf("The Area of this square if %f\n",a);
    return 0;
}