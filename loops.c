#include <stdio.h>

int main() {
    int x = 0;

    // While loop
    printf("While Loop:\n");
    while (x > 0) {
        printf("This won't print because x is %d\n", x);
    }

    // Do-while loop
    printf("Do-While Loop:\n");
    do {
        printf("This prints once even though x is %d\n", x);
    } while (x > 0);

    return 0;
}
