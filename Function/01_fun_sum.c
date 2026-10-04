#include <stdio.h>

// Ye function declaration/prototype ha

/*int     sum          (int, int)
↑       ↑              ↑
return  function       parameters
type    name           types/ */
int sum (int, int);


int sum (int x, int y){
    printf("The sum is %d\n", x+y);
    return x+y;
}
int main() {

int a = 10, b = 20;
sum(a,b);


return 0;
}