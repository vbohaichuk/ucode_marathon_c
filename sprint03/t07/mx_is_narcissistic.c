#include <stdbool.h>
#include <stdio.h>
double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic (int num) {
    int counter = 0;
    int num1 = num;
    int result = 0;
    int summ = 0;
    int num2 = num;
    if(num < 0) 
    return false;
    for (int i = 0; num != 0; i++) {
        num /= 10;
        counter++; 
    }
    while(num1 != 0) {
        summ = num1 % 10;
        result = result + mx_pow(summ, counter);
        num1 = num1 / 10;
    }
    if(result == num2) 
        return 1;
    else 
        return 0;
}
// int main() {
//     int num = 10;
//     printf("%d", mx_is_narcissistic(num));
// }
