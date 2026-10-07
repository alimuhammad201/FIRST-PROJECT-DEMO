#include<stdio.h>

int main()
{
 int show,ticket=500;
 for(show=1;show<=10;show++){
 	printf("Show %d=RS.%d\n",show,ticket);
 	ticket=ticket+50;
 	}
return 0;
}
