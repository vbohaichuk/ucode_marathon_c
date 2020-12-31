#include <stdio.h>
void mx_printchar(char c);
void mx_printint(int n);

void mx_print_arr_int(const int *arr, int size) {
    int i = 0;
while(i < size) {
        mx_printint(arr[i]);
        mx_printchar('\n');
        i++;
    }
}
int main() {
    int size = 5;
    const int arr[5] = {3, 5, 6, 1, 69};
}



