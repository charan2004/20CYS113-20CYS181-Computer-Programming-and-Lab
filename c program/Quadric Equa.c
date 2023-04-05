#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c;
    double p,n;

    printf("enter value of a: ");
    scanf("%d",&a);
    printf("enter value of b: ");
    scanf("%d",&b);
    printf("enter value of c: ");
    scanf("%d",&c);
    
    p = (-b + sqrt((pow(b,2)-4*a*c)))/2*a;
    n = (-b - sqrt((pow(b,2)-4*a*c)))/2*a;
    
    printf("the positive root is %lf and negative root is %lf ",p,n);
}