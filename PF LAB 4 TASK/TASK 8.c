#include<stdio.h>

int main(){
	char grade;
	printf("Enter grade:\n");
	scanf(" %c",&grade);
	
	switch(grade){
		case 'A+':
		   printf("Remarks : Excellent\n");
		   break;
		case 'A':
	 	   printf("Remarks : Very good\n");
		   break;
		case 'B':
		   printf("Remarks : Good\n");
		   break;
		case 'C':
		   printf("Remarks : Work hard\n");
		   break;
		case 'D':
		   printf("Remarks : Word hard\n");
		   break ;
		case 'F':
		   printf("Remarks : Fail\n");
		   break ;
		default :
			printf("Invalid grade\n");
		}
		return 0;
}

