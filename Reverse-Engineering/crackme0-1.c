#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int key = 1337;

int main() {
    
    int x;
    printf("Password? ");
    scanf("%d", &x);
    if (x == key) {
        puts("Correct");
        return 0;
    }
    puts("Incorrect");
    return -1;
}
