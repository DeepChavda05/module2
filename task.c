//write a programe to find maximum value
#include <stdio.h>
int main ()
{
	int a,b,c;
	printf("enter the value:");
	scanf("%d%d%d", &a,&b,&c);
	if((a > b)&&(a > b))
	{
		printf("a is max");
	}
	else
	{
		if((b > a)&&(b > c))
		{
			printf("b is max");
			
		}
		else
		{
			printf("c is max");
		}
	}
	return 0;
}
