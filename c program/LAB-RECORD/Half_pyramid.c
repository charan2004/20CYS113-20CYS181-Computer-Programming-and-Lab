#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid Input");
    }
    else if(n>=25)
    {
        printf("Invalid Input");
    }
    else
    {
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<i+1;j++)
                {
                        printf("* ");
                }
        printf("\n");
        }
    }
    return 0;
}