//TODO: #8 Arrange this C coding into CODEX pattern.
#include <stdio.h>
#include <conio.h>

int main() {
    // C (Comments): Code explanation and purpose.
  
    // O (Order): Declarations, output, and control structures.
    int a = 10;
    int b = 20, c = 30, d = 40;
    printf("This is %d + %d = %d ", a, b, a + b);

    // D (Data): Variable declarations.
    // int a, b, c, d; // Declarations can also be placed here if preferred.

    // E (Execution): Main code execution with a for loop and nested if statements.
    for (int i = 0; i < d - 30; i++) {
        if (i < 30) {
            printf("Here ");
            if (i == 8) {
                printf("This is 8. ");
            }
        } // end if
        printf("ok");
    } // end for

    // X (Exit): Program termination.
    return 0;
}// end main
