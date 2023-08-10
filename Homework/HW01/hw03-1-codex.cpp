// TODO: #8 Arrange this C coding into CODEX pattern.
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20, c = 30, d = 40;
    printf("This is %d + %d = %d ", a, b, a + b);
    for (int i = 0; i < d - 30; i++)
    {
        if (i < 30)
        {
            printf("Here ");
            if (i == 8)
            {
                printf("This is 8. ");
            }
        }
        printf("ok");
    }
    return 0;
}
/*This is 10 + 20 = 30 Here okHere okHere okHere okHere okHere okHere okHere okHere This is 8. okHere ok*/
/*This is 10 + 20 = 30 Here Here Here Here Here Here Here Here Here This is 8. Hereok*/