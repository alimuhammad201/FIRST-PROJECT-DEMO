#include<stdio.h>

int main ()
{
	int units,rate_per_unit,total;
	char conc_type ;
	printf("Enter the units consumed:\n");
	scanf("%d",&units);
	
	printf("Enter the connection type ('D'for domestic and 'C' for commercial):\n");
	scanf(" %c",&conc_type);
	
	if(conc_type == 'D')
	{
	   if (units>=1 && units<=100)
	   {
	   	   rate_per_unit = 500 ;
	   }
	   else if (units>=100 && units<=300)
	   {
	   	   rate_per_unit = 700 ;
	   }
	   else if (units>300)
	   {
	   	   rate_per_unit = 900 ;
	   }
	   else
	   {
	     printf("Invalid unit");
	     return 0 ;
	   }
	}
	else if(conc_type == 'C')
	{
		if (units>=1 && units<=100)
	   {
	   	   rate_per_unit = 800 ;
	   }
	   else if (units>=100 && units<=300)
	   {
	   	   rate_per_unit = 1000 ;
	   }
	   else if (units>300)
	   {
	   	   rate_per_unit = 1100 ;
	   }
	   else
	   {
	     printf("Invalid unit");
	     return 0;
	   }
		
	}
	else
	{
		printf("Invalid connection type\n");
		return 0 ;
	}
	
	total=units*rate_per_unit;
	printf("Your total bill is %d",total);
	return 0 ;
}
