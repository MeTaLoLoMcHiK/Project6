#include <stdio.h>
#include <string.h>
#include <ctype.h>


void trim(char* str) {
    int start = 0, end = strlen(str) - 1;
    while (isspace((unsigned char)str[start])) {
        start++;
    }
    while (end >= start && isspace((unsigned char)str[end])) {
        end--;
    }
    memmove(str, str + start, end - start + 1);

    str[end - start + 1] = '\0';
}

int main() {
    char text[] = "   \tHello, World!   \t";
    printf("Before trim: '%s'\n", text);
    trim(text);
    printf("After trim: '%s'\n", text);
    return 0;
}
