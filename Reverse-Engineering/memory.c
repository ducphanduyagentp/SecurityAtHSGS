#include <stdio.h>
#include <stdlib.h>

int x = 10;
int y;

int main() {
    
    int a = 100;
    printf("x is at %p\n", &x);
    printf("y is at %p\n", &y);
    printf("a is at %p\n", &a);

    printf("x before = %d\n", x);
    int *ptr_x = &x;
    *ptr_x = 20;
    printf("x after = %d\n", x);
    return 0;    
}
