#include <stdio.h>
int main() 
{
	float time;
	float temp;
	printf("Enter the time in hrs: ");
	scanf("%f",&time);
	temp = ((4*time*time)/(2*time + 2)) - 20 ;
	printf("The temp is %f", temp);
}
