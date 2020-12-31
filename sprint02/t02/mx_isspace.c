#include<stdio.h>
#include<stdbool.h>
bool mx_isspace(char c) {
 
if((c >= 9 && c <= 13) || c == 32){
        return 1;
}

        else {
        return 0;
        }
}
// int main() {
//     printf("%i\n",mx_isspace('A') );
//     printf("%i\n",mx_isspace('\n') );
//     printf("%i\n",mx_isspace('\r') );
//     printf("%i\n",mx_isspace('\v') );
// }
