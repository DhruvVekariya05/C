#include<stdio.h>
int main()
{
	int choice;
	printf("enter a choice \n");
	scanf("%d",&choice);
	
	for(int i=0;i<=10;i++)
	{
		printf("%d * %d = %d \n",choice,i,i*choice);
	}
}