#include <stdio.h>
#include <stdlib.h>
int *mx_copy_int_arr(const int *src, int size) {
    int *array = malloc(size);

    if (array == NULL || src == NULL)
    return NULL;
    for (int i = 0; i < size; i++) {
        array[i] = src[i];
    }
    return array;
}
// int main() {
//     const int *src = NULL;
//     int *array = mx_copy_int_arr(src, 4);
//     for (int i = 0; i < 4; i++)
//        if(array == NULL)
//        printf("hello")   
// }
