#include<stdio.h>

     
int main()
{

int num,rem,sum=0;
	 printf("Enter 4-6 digit pin:\n");
	 scanf("%d",&num);
	 printf("reversed value=");

while(num!=0){
	rem=num%10;
	num=num/10;
	sum=sum+rem;
	printf("%d",rem);
}	 
	printf("\nsum = %d",sum);
	return 0;
}
