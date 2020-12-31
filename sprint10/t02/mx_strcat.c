#include "file_to_str.h"

int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2) {
    int len1 = mx_strlen(s1);
    int len2 = mx_strlen(s2);
    int i = 0;
    int j = 0;

    for(i = len1; i < (len1 + len2); i++, j++) {
        s1[i] = s2[j];

        write(1, &s1[i], 1);
        // printf("%c  J -> %d\n", s1[i], j);
    }
    // printf("s1[%d] = %c\n", i - 1 , s1[i-1]);

    s1[i] = '\0';
    return s1;
}
