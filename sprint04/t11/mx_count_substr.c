#include <stdio.h>
#include <string.h>
char *mx_strchr(const char *s ,int c);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n );
char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub) {
    if (!str || !sub) {
        return -1;
    }
    int result = 0;
    int length = mx_strlen(sub);
    char *sub_str = mx_strstr(str, sub);

    if (!length) {
        return 0;
    }
    if (sub_str && *str) {
        result++;
        sub_str += length == 0 ? 1 : length;
    }
    else {
        return 0;
    }
    return result + mx_count_substr(sub_str, sub);
}

int main(){
	char str[] = "yo, yo, yo Neo";
	char sub[] = "yo";
	printf("%d\n", mx_count_substr(str, sub));
}
