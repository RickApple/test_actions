#include <stdio.h>

int main() {
    #if defined(_WIN32)
        printf("Hello, windows!\n");
    #elif defined(__APPLE__)
        printf("Hello, apple!\n");
    #else
        printf("Linux\n");
    #endif
    return 0;
}
