#include <stdio.h>
int mx_factorial_rec(int n) {
   int num = 0;
    if (n == 0)
        return 1;
    else if (n > 12 || n < 0)
        return 0;
    num = n;
    return num * mx_factorial_rec(n -1);
} 
// int main() {
//     int n = 5;
//     printf("%d", mx_factorial_rec(n));
// }