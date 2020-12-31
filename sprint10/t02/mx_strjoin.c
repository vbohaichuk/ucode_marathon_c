#include "file_to_str.h"

char *mx_strcat(char *s1, const char *s2);
char *mx_strdup(const char *str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);

char *mx_strjoin(char const *s1, char const *s2) {
    int length12 = mx_strlen(s1) + mx_strlen(s2);
    char *dublicate = mx_strnew(length12);
    dublicate = mx_strcpy(dublicate, s1);
    dublicate = mx_strcat(dublicate, s2);
    return dublicate;      
}
