#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char s[150] = "SHSGS{RE-1-Do-not-ever-hard-code-your-password}";

char s1[200];

int main() {
    
    puts("password? ");
    fflush(stdout);
    read(0, s1, 175);    
    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] == '\n')
            s1[i] = 0;
    }

    if (!strcmp(s, s1)) {
        puts("Correct");
        return 0;
    }

    puts("Incorrect");
    return -1;
}
