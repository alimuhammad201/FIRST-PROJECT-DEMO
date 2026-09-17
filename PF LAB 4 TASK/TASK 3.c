#include<stdio.h>

int main(){
	int num1,num2;
	printf("Enter first number:");
	scanf("%d",&num1);
	
	printf("Enter second number:");
	scanf("%d",&num2);
	
	if(num1==num2)
	{
		printf("Both are equal\n");
	}
	else if(num1>num2)
	{
		printf("First number is greater\n");
	}
	else
	{
		printf("Second number is greater\n");
	}
	return 0;
}
