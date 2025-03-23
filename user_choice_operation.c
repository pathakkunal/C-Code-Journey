#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	char opt;
	printf("enter value of First numbers:\n");
	scanf("%d",&a);
    printf("enter value of Second numbers:\n");
    scanf("%d",&b);
	printf("enter the arithmetic operator (+,-,*,/)\n");
	scanf(" %c",&opt);
	if(opt=='+')
	{
		int c=a+b;
		printf("the sum of number is: %d",c);
	}
	if(opt=='-')
	{
		int c=a-b;
		printf("the subtract of number is: %d",c);
	}
	if(opt=='*')
	{
		int c=a*b;
		printf("the multiply of number is: %d",c);
	}
	if(opt=='/')
	{
		int c=a/b;
		printf("the divide of number is: %d",c);
	}
}