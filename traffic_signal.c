#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter the Traffic Color:");
	scanf("%c",&ch);
	if(ch=='r')
	{
		printf("Stop",ch);
	}
	if(ch=='y')
	{
		printf("Wait");
	}
	if(ch=='g')
	{
		printf("Go");
	}
	getch();
	
}