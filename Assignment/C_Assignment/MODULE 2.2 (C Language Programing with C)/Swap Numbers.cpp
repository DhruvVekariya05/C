#include<stdio.h>

int main(){
	
	int num1,num2;
	
	printf("enter 2 number\n");
	scanf("%d %d",&num1,&num2);

	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
		
	printf("num1 is %d\n",num1);
	printf("num2 is %d\n",num2);
	
}