#include <stdio.h>

int main(int argc, char *argv[]) {
    // argv[0] is the program name
    for (int i = 0; i < argc; i++) {
        printf("arg[%d]=%s\n", i, argv[i]);
    }
    return 0;
}