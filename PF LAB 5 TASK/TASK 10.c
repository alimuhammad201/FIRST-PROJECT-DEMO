#include<stdio.h>

int main()
{
	int acc,trans;
	
	printf("Select account type(1=Savings,2=Current):\n");
	scanf("%d",&acc);
	
	printf("Select the transaction type(1=Deposit,2=Withdraw,3=Check balance):\n");
	scanf("%d",&trans);
	
	switch(acc)
	{
		case 1 :
			switch(trans)
			{
				case 1 :
				printf("Account type : Savings\nTranstion type : Deposite\n");
				break ;
				case 2 :
				printf("Account type : Savings\nTranstion type : Withdraw\n");
				break ;
				case 3 :
				printf("Account type : Savings\nTranstion type : Check balance\n");
				break ;
				default :
				printf("Invalid transaction type\n");
				break ;
			}
			break;
		case 2 :
			switch(trans)
			{
			    case 1 :
				printf("Account type : Current\nTranstion type : Deposite\n");
				break ;
				case 2 :
				printf("Account type : Current\nTranstion type : Withdraw\n");
				break ;
				case 3 :
				printf("Account type : Current\nTranstion type : Check balance\n");
				break ;
				default :
				printf("Invalid transaction type\n");
				break ;
	        }
	        break;
	            default :
	        	printf("Invalid account type:\n");
	        	break ;
    }
}
