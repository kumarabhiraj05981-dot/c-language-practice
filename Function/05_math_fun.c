#include <stdio.h>
#include<math.h>

double math_square();

double math_square(double square) {
    square = pow(square,2);
    return square;
}
int main() {
    int  a = 5;
    double area_square = math_square(a);
    printf("The Area of this square is %f\n",area_square);
    return 0;
}