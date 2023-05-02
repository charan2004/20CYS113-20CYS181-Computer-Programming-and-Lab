#include <stdio.h>
int main()
{
	int quantity;
	int time;
	double rate;
	printf("Enter the quantity of liq: ");
	scanf("%d",&quantity);
	printf("Enter the time for infusion: ");
	scanf("%d", &time);
	printf("The volume of liq to be infused: %d \n", quantity);
	time = time/60;
	rate = quantity / time;
	printf("The infusion rate is %lf ml/h \n " , rate);
}
