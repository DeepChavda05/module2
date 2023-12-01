#include<stdio.h>
int main()
{
	int a,b;
	int ans;
	float viv;
	printf("enter the value a and b:");
	scanf("%d%d", &a, &b);
	ans=a+b;
	printf("\naddition of a and b is:%d", ans);
	
	ans=a-b;
	printf("\nsubtraction of a and b is:%d", ans);
	
	ans=a*b;
	printf("\nmultiplication of a and b is:%d", ans);
	
	viv=(float)a / (float)b;
	printf("\ndivision of a and b is:%f", viv);
	
	ans=a%b;
	printf("\nmodulo of a and b is :%d", ans);
	return 0;
	
	}
