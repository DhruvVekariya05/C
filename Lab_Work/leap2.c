#include<stdio.h>
void main()
{
	int a;
	printf("enter year : \n");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("year is leap ");
	}
	else
	{
		printf("not a leap year");
	}
}