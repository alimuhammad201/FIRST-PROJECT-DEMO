#include<stdio.h>

int main(){
	int marks ;
	printf("Enter your marks (out of 100)\n");
	scanf("%d",&marks);
	
	if(marks>=90)
	{
	  printf("Grade A\n");
	  if(marks == 100)
	  {
	  	printf("Perfect score\n");
	  }	
	}
	else if(marks>=75)
	{
	  printf("Grade B\n");	
	}
	else if(marks>=60)
	{
	  printf("Grade C\n");
    }
	else if(marks>=40)
	{
	  printf("Grade D\n");	
	}	
	else 
	{
		printf("Fail\n");
	}
}
	

