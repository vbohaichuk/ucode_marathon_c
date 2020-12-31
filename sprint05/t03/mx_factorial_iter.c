#include <stdio.h>
int mx_factorial_iter(int n) {
    int count = 1;
    int out = 1;
    if (n < 0)
        return 0;
    else if (n == 0)
        return 1;
    else if (n > 0) {
        for(count = 1; count <= n; count++) {
            if (2147483647ul / out < count)
                return 0;
            out = out * count;
        }
    }
    return out;
}
int main() {
    printf("%d\n", mx_factorial_iter(4));
    printf("%d\n", mx_factorial_iter(12));
}
