#include <stdio.h>

int main()
{
    // int i = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8;     // left se right chalega, phele multiply and divison hoga baad mein addition and subtraction hoga.
    // printf("%d", i)
    int i = 2, j = 3, k  , l;
    float a, b;
    k = i / j * j;
    l = j / i * i;
    a = i / j * j;
    b = j / i * i;
    printf("% d % d % f % f", k, l, a, b); // these are format specifiers.

        return 0;
}