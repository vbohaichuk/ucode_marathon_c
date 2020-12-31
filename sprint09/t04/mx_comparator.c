#include <stdbool.h>
#include <stdio.h>
bool equal_nums(int a, int b) {
    return a == b;
}
int mx_comparator(const int *arr, int size, int x, bool (*compare) (int, int)) {
    for (int i = 0; i < size; i++) {
        if (equal_nums(x, arr[i]))
            return i;
    }
    return -1;
}
//int main() {
//    int arr[] = {1, 2, 3, 4, 5};
//    printf(“%d”, mx_comparator(arr, 5, 4, equal_nums));
//}
