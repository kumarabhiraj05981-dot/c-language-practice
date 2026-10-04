#include <stdio.h>
int main() {
    int a = 10;
    int* b = &a;
    printf("%d\n",&a);   // a ka address print krega
    printf("%d\n",b);    // a ka address print krega jo b ka value hoga 

    printf("%d\n",*(&a)); // ye phle a ke address me jaa kar pointer se a ka acutal value print krega 
    printf("%d\n",*(b)); // ye a ke address me jo value point kar rha hai oo print kreha mtln a ka acutal value 


    printf("%d\n",(&b));  // ye  b ka address print krega 
    printf("%d\n",*(&b)); // ye a ka address print krga 
    printf("%d\n",**(&b)); // ye a ka acutal value print krega 
}