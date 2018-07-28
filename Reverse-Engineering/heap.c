#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int *x = (int *) malloc(sizeof(int));
    printf("x is pointing to %p\n", x);
    long long int y = 0x41414141;
    long long int z = 0x42424242;
    free(x);
    return 0;
}
