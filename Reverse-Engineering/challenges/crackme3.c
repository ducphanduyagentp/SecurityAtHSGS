#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char wtf[] = "\xf3\xe8\xf3\xe7\xf3\xdb\xf2\xe5\x8d\x93\x8d\xd8\x90\xd2\x8d\x93\xce\xc3\xd2\xd9\xd0\xd4\xc9\xcf\xce\x8d\xc9\xd3\x8d\xc5\xda\x8d\xd0\xda\xdd";

char s[50];

void polymorph(char *s1, char key) {
    for (int i = 0; i < strlen(s1); i++) {
        s1[i] ^= key;
    }
}

int main() {
    
    puts("Password? ");
    fflush(stdout);
    read(0, s, 40);
    if (strlen(s) != 36) {
        puts("Incorrect");
        return -1;
    }
    polymorph(s, 0xa0);
    if (!memcmp(s, wtf, 35)) {
        puts("Correct");
        return 0;
    }
    puts("Incorrect");
    return -1;
}
