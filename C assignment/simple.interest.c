//write a program to find a simple interest 
#include <stdio.h>
#include<math.h>
int main ()
{
	 int a,r,t;
	 int interest;
	 printf ("\n enter the principle amount :");
	 scanf("%d", &a);
	 
	 printf("\n enter the rate :");
	 scanf("%d", &r);
	 
	 printf(" \n enter the time :");
	 scanf("%d", &t);
	 
	 interest = a*r*t/100;
	 printf ("\nthe simple interest is : %d",interest);
	 return 0;
}
