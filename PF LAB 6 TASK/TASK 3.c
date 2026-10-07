#include<stdio.h>

int main()
{
	float amt,grow,si;
    int  i, years;
	printf("Enter the amount deposite,growth factor and years:\n");
	scanf("%f %f %d",&amt,&grow,&years);
for(i=1;i<=years;i++){
	si = amt*grow/100;
	amt= amt+si;
}	
    printf("Amount grown after %d years is RS.%.2f",years,amt);
    return 0;
}
