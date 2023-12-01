//writea programe to convert year into days and days into years
#include <stdio.h>
int main ()
{
	int nod,year,day;
	printf ("\nenter the number of days:");
	scanf (" %d", &nod);
	year= nod/365;
	day=nod %365;
	printf("\nyears is :%d", year);
	printf("\ndays%d", day);
	
	
	
	printf ("\n enter the number of years: ");
	scanf(" %d",&nod);
	day= nod*365;
	printf(" \n days is %d",day );
	return 0;
}
