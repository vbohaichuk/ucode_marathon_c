#include <stdio.h>

int mx_tolower(int c) {
    if(c > 96 && c <123) {
        return c - 32;
    }
    else {
        return c;
    }   
}
// int main() {
//     printf("%c\n", mx_tolower('1'));
// }
