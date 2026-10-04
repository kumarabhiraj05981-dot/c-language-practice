#include <stdio.h>
int main() {
    int n, not_prime=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    } else {
        int i = 2;
        while (i <n)
        {
            if (n%i==0 && n != 2) {
                not_prime = 1;
                break;
            }
            i++;
        }
    }
    if (not_prime){
        printf("%d is not prime number",n);
    }else {
        printf("%d is prime number",n);
    }
    return 0;
}