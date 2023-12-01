#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c;
	float d;
	printf("Enter value of circle:");
	scanf("%f", &d);
	d = 3.14 * d * d;
	printf("\nArea of circle is:%f", d);
	
	
	printf("\nEnter value of Tringle:");
	scanf("%d%d", &a, &b);
	c = b * a / 2;
	printf("\nArea of Tringle is:%d", c);
	
	
	printf("\nEnter value of Rectangle:");
	scanf("%d%d", &a, &b);
	c = a * b;
	printf("\nArea of Rectangle is:%d", c);
	return 0;
}

