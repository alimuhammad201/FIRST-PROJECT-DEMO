#include<stdio.h>

int main()
{
	int a,b,c ;
	printf("Enter the sides of triangle:\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if( a+b>c || b+c>a || c+a>b)
	{
		if(a==b && b==c && a==c)
		{
			printf("Equilateral triangle\n");
		}
		else if(a!=b && b!=c && b!=c)
		{
			printf("Scalene triangle\n");
		}
		else
		{
		    printf("Isosceles triangle\n");	
		}
	}
	else
	{
		printf("Not a valid triangle");
	}
	  return 0;	
}
