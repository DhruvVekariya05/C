#include<stdio.h>
void main(){
	int marks;
	printf("enter a marks:\n");
	scanf("%c",&marks);

	switch(marks/10)
	{
		case 10 :
			printf("O+");
			break;
			
		case 9 :
			printf("A+");
			break;
			
		}	
}
