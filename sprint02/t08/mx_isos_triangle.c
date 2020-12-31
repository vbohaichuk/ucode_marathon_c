void mx_printchar(char c);
void mx_isos_triangle(unsigned int length, char c) {
    for (unsigned int i = 0; i <= length - 1; i++) {
        for (unsigned int y = 0; y <= i; y++)
        {
            mx_printchar(c);
        }
            mx_printchar('\n');
    }
}
// int main() {
//     mx_isos_triangle(5, '*');
// }
