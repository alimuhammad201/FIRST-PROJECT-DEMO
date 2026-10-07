#include<stdio.h>

int main()
{
	int opt;
	printf("-----KIOSK SYSTEM----\n");
do{	
	
	printf("1.Add Item\n");
	printf("2.Remove Item\n");
	printf("3.View Total\n");
	printf("4.Checkoutt\n");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1 :
			printf("Item added\n");
			break;
		case 2 :
			printf("Item removed\n");
			break;
		case 3 :
			printf("Viewing total:...\n");
			break;	
		case 4 :
			printf("Checkedout,Thank you!\n");
			break;	
	}
	
}while(opt!=4);
return 0;	
}
