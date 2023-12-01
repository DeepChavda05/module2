#include<stdio.h>
#include<math.h>
int main()
{
	int a, b;
	printf("Enter your number :");
	scanf("%d%d",&a,&b);
	printf("\nBefore swap : %d %d",a,b);
		
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swap : %d %d",a,b);
	return 0;
}

