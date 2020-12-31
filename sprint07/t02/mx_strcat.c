#include <stdio.h>
#include <string.h>
#include <unistd.h>

int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2) {
    int len1 = mx_strlen(s1);
    int len2 = mx_strlen(s2);
    int i = 0;
    int j = 0;

    for(i = len1; i < (len1 + len2); i++, j++) {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
        return s1;
}
// int main() {
//     char s1[11] = "hello";
//     const char s2[] = "world";
//     printf("%s\n", strcat(s1, s2));
// }
