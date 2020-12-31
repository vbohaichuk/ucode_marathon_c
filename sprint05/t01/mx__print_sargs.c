#include <stdio.h>
#include <unistd.h>

void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char **argv) {
    char *a;
    for (int i = 1; i < argc; i++) {
        for (int j = i + 1; j < argc; j++) {
            if (mx_strcmp(argv[i], argv[j]) > 0) {
                // printf("argv[%d] = %s --- argv[%d] = %s\n", j, argv[j], i, argv[i]);
                a = argv[i];
                argv[i] = argv[j];
                argv[j] = a;
            }
        }
        for (int h = 1; h < argc; h++) {
            mx_printstr(argv[h]);
            mx_printstr("  ");
        }
        mx_printchar('\n');
    }
    for (int h = 1; h < argc; h++) {
        mx_printstr(argv[h]);
        mx_printchar('\n');
    }
}   
