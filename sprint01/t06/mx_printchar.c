#include <unistd.h>

void mx_printchar(char c) {
  write(1, &c, 1 );
}  
//int main() {
  //mx_printchar(90);
//}
