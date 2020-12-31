#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

int mx_atoi(const char *str);
void mx_printint(int num);
void mx_printchar(char c);

int main(int argc, char **argv) {
	printf("%d\n", mx_atoi("   2"));

	int sum = 0;
	if (argc > 1) {
		for (int i = 1; i < argc; i++)
			if (atoi(argv[i]) != 0)
				sum += mx_atoi(argv[i]);
	}
	mx_printint(sum);
	mx_printchar('\n');
}
