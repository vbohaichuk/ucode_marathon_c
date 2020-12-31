#include "nbr_to_hex.h"

#include <stdio.h>

char *mx_nbr_to_hex(unsigned long nbr) {
    char *resf = 0;
    int i = 0;
    char *res = NULL;
    int j = 0;
    unsigned long nbr1 = nbr;
    for(; nbr1 > 0; i++) {
        nbr1 /= 16;
    }
    res = mx_strnew(i);
    resf = mx_strnew(i);
    for (i = 0; nbr > 15; i++) {
        if (nbr % 16 < 10)
            res[i] = nbr % 16 + 48;
        if (nbr % 16 > 9)
            res[i] = nbr % 16 + 87;
        nbr = nbr / 16;
    }
    if (nbr % 16 < 10)
        res[i] = nbr % 16 + 48;
    if (nbr % 16 > 9)
        res[i] = nbr % 16 + 87;

    for (; i >= 0; i--, j++) {
        resf[j] = res[i];
    }
    return resf;
}
//int main() {
//    printf("%s", mx_nbr_to_hex(1000));
//}
