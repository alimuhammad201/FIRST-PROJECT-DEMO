#include<stdio.h>
#include<math.h>

int main()
{
	int mode,num1,num2,result;
	char sym,opt ;
	printf("Select the mode for calculation(1=Basic or 2=power/square root):\n");
	scanf("%d",&mode);
	
	switch(mode)
	{
    	case 1:
			
		    printf("Enter operator and two number:\n");
		    scanf(" %c %d %d", &opt, &num1, &num2);
			switch(opt)
		    {
			case'+':
				result=num1+num2;
				printf("Result=%d\n",result);
				break;
			case'-':
				result=num1-num2 ;
				printf("Result=%d\n",result);
				break;
			case'*':
				result=num1*num2 ;
				printf("Result=%d\n",result);
				break;
			case'/':
				result=num1/num2 ;
				printf("Result=%d\n",result);
				break;
				default:
				break ;	
	    }
	            break ;
	    case 2 :
		    printf("Enter symbol(s for square or r for square root):\n");
			scanf(" %c",&sym);
			
			switch(sym)
			{
				case 's':
				printf("Enter two number(base and power):\n");
				scanf("%d %d",&num1,&num2);
				result=pow(num1,num2);
				printf("Result=%d\n",result);	
				break;
				
				case 'r':
				printf("Enter a number:\n");
				scanf("%d",&num1);
				result=sqrt(num1);	
				printf("Result=%d",result);
				break;
				default:
				break;
			}
			break;
			default:
			break ;
        
	}
	return 0 ;
}
