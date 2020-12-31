#include <stdio.h>
int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);
void mx_str_reverse(char *s) {
    int length = mx_strlen(s) - 1;
    for(int i = 0; i < length; i++, length--) {
        mx_swap_char(&s[i], &s[length]);
    }
}
// int main() {
//     char s[] = "ZALUPA";
//     mx_str_reverse(s);
//     printf("%s", s);
// }
