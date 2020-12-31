#include <stdbool.h>
#include <stdio.h>
bool mx_isalpha(int c) {
    if(c >= 65 && c <= 90)
        return true;
    else if(c >= 97 && c <= 122)
         return true;
    else {
        return false;
     }
}
// int main()  {
//     printf("%d", mx_isalpha('1'));
// }
