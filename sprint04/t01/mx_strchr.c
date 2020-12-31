#include <stdio.h>
char *mx_strchr(const char *s, int c) {
    while (*s != '\0') {
        if(c == *s)
            return (char *) s;
        s++;
    }
    return NULL;
}
// int main() {
//     printf("%s\n", mx_strchr("hellozxfsdgdfsgsdfgc", '1'));
// }
