//write a program to find a leap year
#include <stdio.h>
int main ()
{
	int a;
	printf (" enter the year:");
	scanf (" %d", &a);
	if ((a%4==0) && ((a%100!=0) || (a%400==0)))
	{
		printf (" \n leap year");
	}
	else
	{
		printf (" \n not leap year");
	}
	return 0;
	
}
