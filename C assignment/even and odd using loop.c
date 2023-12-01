#include <stdio.h>
int i;
int main() 
{
	
    int evencount = 0;
    int oddcount = 0;
    int evensum = 0;
    int oddsum = 0;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++) 
	{
        int num;
        scanf("%d", &num);

        if (num % 2 == 0) {
            evencount++;
            evensum += num;
        } else {
            oddcount++;
            oddsum += num;
        }
    }

    printf("Number of even numbers: %d\n", evencount);
    printf("Number of odd numbers: %d\n", oddcount);
    printf("Sum of even numbers: %d\n", evensum);
    printf("Sum of odd numbers: %d\n", oddsum);

    return 0;
}






