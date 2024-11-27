#include <stdio.h>

int main(void) {
    char ch;
    while ((ch = getchar()) != '\n') {
        if (ch >= 'A' && ch <= 'Z')
            putchar(ch + ('a' - 'A'));
        else if (ch >= 'a' && ch <= 'z')
            putchar(ch - ('a' - 'A'));
        else
            putchar(ch);
    }
    return 0;
}
