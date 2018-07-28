#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[10];
    int x = 0;
    printf("before x = %d\n", x);
    gets(s);
    printf("after x = %d", x);
    return 0;
}
