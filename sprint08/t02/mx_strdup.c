#include <stdlib.h>

char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
int mx_strlen(const char *s);

char *mx_strdup(const char *str) {
    char *dup_str = !str ? NULL : mx_strnew(mx_strlen(str));

    return !dup_str ? NULL : mx_strcpy(dup_str, str);
}
