#include<stdio.h>


int main(){
    int age;
	char day ;
	float final_price , disc_price,ticket_price= 10000.00 ;
	printf("Enter your age:\n");
	scanf("%d",&age); 
	printf("Enter day('W'for weekday and 'H' for holiday or weekend):\n");
	scanf(" %c",&day); 
if(age<12 && age>60)
{
	 	if(day== 'W'|| day=='w')
	 	{
	 	 disc_price=ticket_price*0.6;
	  	 final_price=ticket_price-disc_price;
	  	 printf("Final ticket price is %.2f",final_price);
		}
		 else if(day=='H'|| day=='h')
		{
		  disc_price=ticket_price*0.4;
	      final_price=ticket_price-disc_price;
	      printf("Final ticket price is %.2f",final_price);
		}
		 else 
		{
		 	printf("Invalid symbol!\n");
		}		
}
else
{
  if(day== 'W'|| day=='w')
	 	{
	 	 disc_price=ticket_price*0.3;
	  	 final_price=ticket_price-disc_price;
	  	 printf("Final ticket price is %.2f",final_price);
	    }
		 else if(day== 'H'|| day=='h')
		{
		  disc_price=ticket_price*0.2;
	      final_price=ticket_price-disc_price;
	      printf("Final ticket price is %.2f",final_price);
		}
		 else 
		{
		 	printf("Invalid symbol!\n");
		}		
		 
}
      
        return 0 ;
}
	
