#include <stdio.h>
int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
	int left = 0;
	int right = size - 1;
	int mid = 0;

	while (left <= right) {
		mid = (left + right) / 2;
		(*count)++;
		if (mx_strcmp(arr[mid], s) < 0) {
			left = mid + 1;
        }
		else if (mx_strcmp(arr[mid], s) > 0) {
			right = mid - 1;
        }
		else {
			return mid;
        }
	}
    *count = 0;
	return -1;
}

int main(void) {
    int count = 0;
    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
    printf("%d-%d\n", mx_binary_search(arr, 6, "ab", &count), count);
    count = 0;
    printf("%d-%d\n", mx_binary_search(arr, 6, "aBc", &count), count);
    count = 0;
    printf("%d-%d\n", mx_binary_search(arr, 6, "abdc", &count), count);
}	