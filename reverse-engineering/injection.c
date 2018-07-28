#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char s[50] = "ping -c 1 ";

int main() {
    printf("Input an IP address to ping: ");
    fflush(stdout);
    read(0, s + 10, 40);
    puts(s);
    system(s);
}
