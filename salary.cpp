#include<stdio.h>
int main()
{
	FILE*ptr;
	char name[20];
	int sal;
	ptr=fopen("salary.txt","w");
	for(int i=0;i<2;i++)
	{
		printf("Enter the name and salary of employe%d: \n",i+1);
	    scanf("%s%d",&name,&sal);
		fprintf(ptr,"%s,%d\n",name,sal);
	}
	fclose(ptr);
	return 0;
}