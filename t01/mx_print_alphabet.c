#include <unistd.h>

void mx_printchar(char c);

void mx_print_alphabet(void) {
    for (int i = 65; i != 91;) {
        mx_printchar(i);
        i += 33;
        mx_printchar(i);
        i -= 31;
    }
    mx_printchar('\n');
}


