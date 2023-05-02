#include <stdio.h>
int main()
{
	int start;
	int end;
	int distance;
	printf("Enter the odometer reading at start: ");
	scanf("%d", &start);
	printf("Enter the odometer reading at end: ");
	scanf("%d" , &end);
	distance = end - start ;
	printf("Distance covered is %d", distance);
	printf("Reward for distance covered, (10 Rupees per km), %d ", distance*10);
}
