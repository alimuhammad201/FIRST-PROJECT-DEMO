#include<stdio.h>

int main(){
	int units,bill= 5000 ,discount, final_bill;
	printf("Enter units consumed :\n");
	scanf("%d",&units);
	 if(units<100)
	 {
	    discount= bill*0.10 ;
	    final_bill = bill - discount ;
		printf("Final bill :Rs. %d",final_bill);
	 }
	 else
	 {
	     final_bill = bill ;
		 printf("Final bill :Rs.%d",final_bill);
	 }
	 return 0 ;
}
