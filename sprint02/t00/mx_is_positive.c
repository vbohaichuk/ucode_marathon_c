#include <unistd.h>
void mx_printstr(const char *s);
void mx_is_positive(int i) {
    int z = i;
    if(z <= -1 )
    mx_printstr("negative\n");
    if(z == 0)
    mx_printstr("zero\n");
    if(z >= 1)
        mx_printstr("positive\n");
}
// int main() {
//     mx_is_positive(0);
//  }
