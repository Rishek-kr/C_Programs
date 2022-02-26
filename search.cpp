#include<stdio.h>
int main()
{
	char st[]="Rishek";
	char p;
	char *ptr=st;
	printf("Enter the character to be searched: ");
	scanf("%c",&p);
	while(*ptr!='\0')
	{
	   if(*ptr==p)
	   {
		 printf("Character is present.");
	   }
	   ptr++;	    	   
    }    
}