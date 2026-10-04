#include <stdio.h>
int main() {
    int i = 10;
    int* j = &i;
    int** k = &j;

    printf("The value is %d\n",i);
    printf("The value is %d\n",*j);
    printf("The value is %d\n",**k);


    printf("The value is %d\n",i);
    printf("The value is %p\n",&i);
    printf("The value is %p\n",*(&j));
    printf("The value is %p\n",**(&k));

 return 0;
}