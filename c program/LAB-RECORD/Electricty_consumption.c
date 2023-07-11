#include<stdio.h>
int main(){
    float b;
    float sum[5];
    float reading[5];
    char name[5][20];
    int ebno[5];
    printf("Enter the customer name: \n");
    for(int j=0;j<5;j++){
        scanf("%s",&name[j]);
    }
    printf("Enter the EB numbers: \n");
    for(int k=0;k<5;k++){
        scanf("%d",&ebno[k]);
    }
    printf("Enter the readings \n");
    for(int i=0;i<5;i++){
        scanf("%f",&reading[i]);
    }
    for(int i=0;i<5;i++){
        b=0;
        if(reading[i]<0){
            printf("Readings can only be positive\n");
        }
        else if(reading[i]<=100 && reading[i]>=0){
            b=0;
        }
        else if(reading[i]>100 && reading[i]<=400){
            b+=reading[i]*2.25;
        }
        else if(reading[i]>400 && reading[i]<=500){
            b= 900 + (reading[i]*4.50);
        }
        else if(reading[i]>500 && reading[i]<=600){
            b= 2250 + reading[i]*6;
        }
        else if(reading[i]>600){
            b= 3600 + reading[i]*8;
        }
        sum[i]=b;
    }
    printf("\n");
    printf("The Electricity bill for the corresponding customer is:\n");
    for(int x=0;x<5;x++){
        printf("Customer name: %s \n",name[x]);
        printf("EB number: %d \n", ebno[x]);
        printf("Reading: %lf \n", reading[x]);
        printf("Total BIll: %.2f Rupees\n",sum[x]);
    }
}