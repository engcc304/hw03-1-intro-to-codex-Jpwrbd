#include <stdio.h>

void printNumbers(int a, int b);

int main() {

    int a = 10;
    int b = 20, c = 30, d = 40;

    printf("This is %d + %d = %d\n", a, b, a + b);

    for (int i = 0; i < d - 30; i++) {
        if (i < 30) {
            printf("Here");
            if (i == 8) {
                printf("This is 8. ");
            }
        }
    }
    
    printf("ok\n");

    return 0;
}

void printNumbers(int a, int b) {
    printf("%d and %d\n", a, b);
}
