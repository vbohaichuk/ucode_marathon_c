#include <stdbool.h>
#include <stdio.h>

bool mx_islower(int c);
bool mx_isupper(int c);
int mx_touper(int c);
int mx_tolower(int c);

void mx_reverse_case(char *s) {
        int i = 0;
    while(s[i]) {
        if(mx_islower (s[i])) {
            s[i] = mx_touper(s[i]);
        }
        else if(mx_isupper (s[i])) {
            s[i] = mx_tolower(s[i]);
        }
                i++;
    }
}
// int main() {
//     char s[] = "HeLLo Neo";
//     mx_reverse_case(s);
//     printf("%s", s);
//     return 0;
// }
