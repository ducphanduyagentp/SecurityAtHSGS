#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main() {
    unsigned int x;
    char s[10];
    for (int i = 0; i < 10; i++) {
        s[i] = 0;
    }
    read(0, s, 4);
    for (int i = 0; i < 4; i++) {
        if (s[i] == '\n')
            s[i] = 0;
    }
    if (strlen(s) > 2) {
        puts("Invalid");
        return -1;
    }
    x = atoi(s);
    if (x > 100) {
        puts("you win");
        return 0;
    }
    puts("you lose");

}
