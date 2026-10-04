#include <stdio.h>
float average(int , int , int );

float average(int a, int b, int c){
    return (a+b+c)/3.0;
}
int main() {
    int a,b,c;
    printf("Enter a Three number: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("The Average of a, b and c is %f\n",average(a, b, c));
    return 0;

} 