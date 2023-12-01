#include <stdio.h> 
int main() 
{ 
int i, n;
int arr[100]; 
printf("how many numbers you have to add (1 to 100): "); 
/*scanf("%d", &n); 
for (i = 0; i < n; ++i) 
*/{
 printf("Enter number%d: ", i + 1); 
 scanf("%d", &arr[i]); 
 }
 for (i = 1; i < n; ++i) 
 {
  if (arr[0] < arr[i]) arr[0] = arr[i];
   } 
   printf("Largest element = %d", arr[0]); 
  return 0; 
  }


