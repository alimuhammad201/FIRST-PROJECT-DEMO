#include<stdio.h>

int main()
{
	char sig1,sig2;
	printf("Enter the symbol for traffic light(R=red,G=green,Y=yellow):\n");
	scanf(" %c",&sig1);
	
	switch(sig1)
	{
	
	case 'R':
		printf("Want to press pedistarian button?\n");
		scanf(" %c",&sig2);
	switch(sig2)
	{
		case 'Y':
			printf("Go!\n");
			break;
		case 'N':
			printf("stop and wait!\n");
			break;
		default:
			printf("Invalid Signal\n");
			break;
	}
	break;
	case 'G':
		printf("Want to press pedistarian button?\n");
		scanf(" %c",&sig2);
		switch(sig2)
		{
		printf("Want to press pedestarian button?\n");
		scanf(" %c",&sig2);
	
		case 'Y':
			printf("Go but watch for pedistarian!\n");
			break;
		case 'N':
			printf("Go!\n");
			break;
		default:
			printf("Invalid Signal\n");
			break;
	}
	break;
	case 'Y':
		printf("Stop and cross!\n");
		break;
	default:
		printf("Invalid signal\n");
	break;
	}
	
}
