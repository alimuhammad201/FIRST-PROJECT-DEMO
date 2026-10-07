#include<stdio.h>

int main()
{
	int i;
do{
	printf("Enter your marks:\n");
	scanf("%d",&i);
if(i>=50&&i<=100)
{
	printf("Result:Pass\n");
}
else if(i>=0&&i<=49){
	printf("Result:Fail\n");
}
else
{
	printf("Invalid marks!");
}

}while(i>=1 && i<=100);
}
