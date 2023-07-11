#include <stdio.h>
#include <math.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=0){
        printf("Error: Value should be greater than 0");
    }
    else{
        decimalToBinary(a);
        printf("\n");
        decimalToOctal(a);
        printf("\n");
        decimalToHexadecimal(a);
    }
}

void decimalToBinary(int a){
    int value[30],k=0,i;
    while(a!=0){
        if(a%2==0){
            value[k]=0;
            k=k+1;
        }
        else{
            value[k]=1;
            k=k+1;
        }
        a=a/2;    
    }
    printf("Binary equivalent: ");
    for(i=k-1;i>=0;i--){
        printf("%d",value[i]);
    }
}

void decimalToOctal(int a){
    int value[30],k=0,i,it;
    while(a!=0){
        it=(a%8);
        value[k]=it;
        k=k+1;
        a=a/8;
    }
    printf("Octal equivalent: ");
    for(i=k-1;i>=0;i--){
        printf("%d",value[i]);
    }
}

void decimalToHexadecimal(int a){
    printf("Hexadecimal equivalent: ");
    printf("%X",a);
}