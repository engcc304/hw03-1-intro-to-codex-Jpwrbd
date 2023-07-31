// TODO: #8 Arrange this C coding into CODEX pattern.
#include <stdio.h>
#include <conio.h>
int main() {
    // Declarations
    int a = 10 ;
    int b = 20, c = 30, d = 40 ;
    // Output
    printf( "This is %d + %d = %d " , a, b, a + b ) ;
    // Loop
    for ( int i = 0 ; i < d - 30 ; i++ ) {
        if ( i < 30 ) {
            printf( "Here " ) ;
            if ( i == 8 ) {
                printf( "This is 8. " ) ;
            }
        } // end if
        printf( "ok" ) ;
    } // end for

    // Termination
    return 0 ;
}// end main
