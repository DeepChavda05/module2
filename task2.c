//write a program to find user are eligible for voting or not without using if else
#include<stdio.h>
int main()
{
	int a;
	printf(" \n enter the age :");
	scanf("%d",&a);
	(a>=18) ? printf("\n eligible") : printf("\n aren't eligible");
	return 0;
}
