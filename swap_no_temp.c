#include <stdio.h>

int main ()
{
    int a, b, swap;
    scanf("%d %d", &a, &b);

    swap = a;
    a = b;
    b = swap;
    printf("Après échange : a = %d, b = %d\n", a, b);

    return 0;
}