#include <stdio.h>
void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {
    int i = 0;

    while(str[i]) {
        if(str[i] == delim) {
            i++;
            mx_printchar('\n');
        }
        mx_printchar(str[i]);
        i++;
    }
}

// int main() {
// mx_str_separate("game over", 'o');
// }
