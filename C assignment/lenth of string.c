#include <stdio.h>
 
int main()
{
    char string[500];
    int i, length = 0;
 
    printf("Enter the string: \n");
    gets(string);
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    printf("The length of %s = %d\n", string, length);
return 0;
}


