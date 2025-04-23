#include <stdio.h>

int main() {
    #if defined(_WIN32)
        printf("Hello, windows!\n");
    #elif defined(APPLE)
        printf("Hello, apple!\n");
    #else
        printf("Linux\n");
    #endif
    return 0;
}
