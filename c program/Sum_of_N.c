#include<stdio.h>
int main(){
    int a,n;
    printf("Enter a value for a :");
    scanf("%d",&a);
    n=0;
    for(int i=0;i<=a;++i){
        n=n+i;
    }
    printf("Sum of %d numbers = %d",a,n);

}