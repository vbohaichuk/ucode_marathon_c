#include <stdio.h>

void mx_printchar(char c);

void mx_hexadecimal(void) {
    int i = 0;
    for(i = 48; i <= 57; i++) {
        mx_printchar(i);
    }
    

int j = 0;
    for(j = 65 ; j <= 70; j++) {
        mx_printchar(j);
    }
    mx_printchar('\n');
}

// int main() {
//     mx_hexadecimal();
// }


