#include <stdio.h>

void mx_printchar(char c);

void mx_print_alphabet(void) {
        int i = 0;
        int z = 65;
        int m = 98;
    for (i = 0; i < 26; i++) {
        if (i%2 == 0) {
            mx_printchar(z);
            z += 2;
        }
        else{
        mx_printchar(m);
        m += 2;
        }
    
    
    }
    mx_printchar('\n');
 
}

// int main() {
//     mx_print_alphabet();
// }

    
