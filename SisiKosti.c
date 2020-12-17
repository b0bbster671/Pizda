#include <stdio.h>

int GetBinom (int n, int m)
{
    if (m > 0 && n > m)
    {
        return GetBinom (n - 1, m) + GetBinom (n - 1, m - 1);
    }
    return 1;
}

int main ()
{
    int n,m;
    scanf ("%d", &n);
    scanf ("%d", &m);
    printf ("\n%d", GetBinom (n, m));

    return 0;
}
