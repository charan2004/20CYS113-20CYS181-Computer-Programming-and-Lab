#include <stdio.h>
struct comp{
        int real;
        int imag;
};
void main()
{
    struct comp a,b,c;
        scanf("%d %d",&a.real,&a.imag);
        scanf("%d %d",&b.real,&b.imag);
        c.real=a.real+b.real;
        c.imag=a.imag+b.imag;
        printf("%d+%di\n",c.real, c.imag);
        printf("%d+%di",a.real-b.real,a.imag-b.imag);
}