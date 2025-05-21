#include <stdio.h>

int main ()
{
    int n, factorial = 1;
    printf("Veillez saisir votre factoriel :\n");
    scanf("%d", &n);
    
    if(n > 0)
    
    for(int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("Le factoriel de %d est : %d\n", n, factorial);
    
    
    return 0;
}