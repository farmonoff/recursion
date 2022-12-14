#include <stdio.h>

void daraja(int n, int m)
{
    if (m > 0)
        daraja(n, m - 1); 
    printf("%d", n * n);
}

int main()
{

    int n, m;
    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);

    daraja(n, m);

    //printf("%d", n);

    return 0;
}