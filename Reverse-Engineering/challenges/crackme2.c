#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char s[150];

char s1[200];

int main() {
    
    puts("password? ");
    fflush(stdout);
    read(0, s1, 175);
    s[0] = 'S';
    s[1] = 'H';
    s[2] = 'S';
    s[3] = 'G';
    s[4] = 'S';
    s[5] = '{';
    s[6] = 'R';
    s[7] = 'E';
    s[8] = '-';
    s[9] = '2';
    s[10] = '-';
    s[11] = 'i';
    s[12] = 't';
    s[13] = 's';
    s[14] = '-';
    s[15] = 'n';
    s[16] = 'o';
    s[17] = 't';
    s[18] = '-';
    s[19] = 'g';
    s[20] = 'o';
    s[21] = 'o';
    s[22] = 'd';
    s[23] = '-';
    s[24] = 't';
    s[25] = 'o';
    s[26] = '-';
    s[27] = 'l';
    s[28] = 'e';
    s[29] = 'a';
    s[30] = 'v';
    s[31] = 'e';
    s[32] = '-';
    s[33] = 'y';
    s[34] = 'o';
    s[35] = 'u';
    s[36] = 'r';
    s[37] = '-';
    s[38] = 'p';
    s[39] = 'a';
    s[40] = 's';
    s[41] = 's';
    s[42] = 'w';
    s[43] = 'o';
    s[44] = 'r';
    s[45] = 'd';
    s[46] = '-';
    s[47] = 'u';
    s[48] = 'n';
    s[49] = 'e';
    s[50] = 'n';
    s[51] = 'c';
    s[52] = 'r';
    s[53] = 'y';
    s[54] = 'p';
    s[55] = 't';
    s[56] = 'e';
    s[57] = 'd';
    s[58] = '}';


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
