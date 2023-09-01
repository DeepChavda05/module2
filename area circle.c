#include<stdio.h>
#include<math.h>
#define pi 3.14
int main ()
{
	int r;
	float area;
	printf("enter a radius :");
	scanf("%d",&r);
	area = pi* r*r;
	printf ("the area of circle is :%f",area);
	return 0;
	
}
