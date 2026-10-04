#include<stdio.h>

int main()
{
	int sem;
	char prog;
	printf("Enter the character\n(C=Computer science),E=Electrical enginnering ,B=Business:\n");
	scanf(" %c",&prog);
	printf("Enter semester(1,2 or3):\n");
	scanf("%d",&sem);
	
switch(prog)
	{
		case 'C':
			switch(sem)
			{
				case 1 :
					printf("Core course : Programming Fundamentals\n");
					break;
				case 2 :
					printf("Core course : Data structures and alogarithm\n");
					break;
				case 3 :
					printf("Core course : Discrete Mathematics\n");
					break;
				default:
					printf("Ivalid semester\n");
					break ;
			}
			break;
		case 'E':
			switch(sem)
			{
				case 1 :
					printf("Core course : Applied calculus\n");
					break;
				case 2 :
					printf("Core course :Linear Algebra\n");
					break;
				case 3 :
					printf("Core course : Multivariable Calculus\n");
					break;
				default:
					printf("Ivalid semester\n");
					break ;
			}
			break;
		case 'B':
		switch(sem)
			{
				case 1 :
					printf("Core course : Introduction to Financial Accounting\n");
					break;
				case 2 :
					printf("Core course :  Business Economics\n");
					break;
				case 3 :
					printf("Core course : Cost and Management Accountin\n");
					break;
				default:
					printf("Ivalid semester\n");
					break ;	
		    }
		    break;
		default:
			printf("Invalid program \n");
}
}
