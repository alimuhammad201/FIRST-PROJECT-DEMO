#include<stdio.h>

int main(){
	char letter;
	printf("Enter letter R,Y or G:\n");
	scanf(" %c",&letter);
	
	switch(letter){
		case'R':
			printf("Stop!\n");
			break;
		case'Y' :
			printf("Wait!\n");
			break;	
		case'G' :
			printf("Go!\n");
			break;
	    default :
	    	printf("Invalid letter\n");
		}
	return 0 ;
}
