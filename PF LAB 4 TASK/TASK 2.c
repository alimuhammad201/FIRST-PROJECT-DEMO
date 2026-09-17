#include<stdio.h>

int main (){
	int num ;
	printf("Enter any number:");
	scanf("%d",&num);
	
	if(num%3==0 && num%5==0){
		printf("Number is divisble by 3 and 5\n");
	}
	else{
		printf("Number is not divisble by 3 and 5\n");
	}
	return 0 ;
}
