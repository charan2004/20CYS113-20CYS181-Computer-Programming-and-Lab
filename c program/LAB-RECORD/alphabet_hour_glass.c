#include <stdio.h>
int main()
{
int n, alphabet;
scanf("%d", &n);
for(int i=n; i>1;i--)
{
    alphabet = 68;
    for (int j=0; j<2*(n-i); j++)
    {
        printf(" ");
    }
    for (int k=0; k<=2*(i-1); k++)
    {
        printf("%c ",alphabet+k);
    }
    printf("\n");
}
for(int i=1; i<=n;i++)
{
    alphabet=68;
    for (int j=0; j<2*(n-i); j++)
    {
        printf(" ");
    }
    for (int k=0; k<=2*(i-1); k++)
    {
        printf("%c ",alphabet+k);
    }
    printf("\n");
}
}