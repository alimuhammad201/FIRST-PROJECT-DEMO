#include<stdio.h>

int main()
{
	int menu,spec ;
	printf("Select menu(1=Beverages, 2=Main Course, or 3=Desserts):");
	scanf("%d",&menu);
	
	switch(menu)
	{
     case 1:
		printf("Select specific item(1=Lemonade, 2=Coffee, or 3=Apple juice):\n");
	    scanf("%d",&spec);
	    switch(spec)
	    {
	    case 1 :
	    		printf("Item selected:Lemonade\n",&spec);
	    		break;
	    case 2 :
	    		printf("Item selected:Coffee\n",&spec);
	    		break;
		case 3 :
	    		printf("Item selected:Apple juice\n",&spec);
	    		break;
	    default :
			printf("Invalid item selected\n");
			break;
		}
		break ;
	case 2:
		printf("Select specific item(1=Tikka, 2=Biryani, or 3=Karhai):\n");
		scanf("%d",&spec);
	        switch(spec)
		{
		case 1 :
	    		printf("Item selected:Tikka\n",&spec);
	    		break;
	    case 2 :
	    		printf("Item selected:Biryani\n",&spec);
	    		break;
		case 3 :
	    		printf("Item selected:Karhai\n",&spec);
	    		break;
	    default :
			printf("Invalid item selected\n");
			break;
		}
		break;
	case 3:
		printf("Select specific item(1=Cakes, 2=Cookies, or 3=Brownie):\n");
		scanf("%d",&spec);
	        switch(spec)
			{
		case 1 :
	    		printf("Item selected:Cakes\n",&spec);
	    		break;
	    case 2 :
	    		printf("Item selected:Cookiees\n",&spec);
	    		break;
		case 3 :
	    		printf("Item selected:Brownie\n",&spec);
	    		break;
	    default :
			printf("Invalid item selected\n");
			break;
		}
		break;
		default:
			printf("Invalid menu \n");
			break;
    }
}
	
	

