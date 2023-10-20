#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

    if(a%2)
        printf("%d is odd",a);
    else
        printf("%d is even",a);
    return 0;
}