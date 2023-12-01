#include <stdio.h>
struct Student
{
    char name[20], add[50];
    int id, age;
};
int main()
{
    int count = 5;
    struct Student st[count];
    int i;
    for (i = 0; i < count; i++)    
    {
    	printf("Enter Emplloyee id:");
        scanf("%d", &st[i].id);
        printf("\n");
		printf("Enter your Name: ");
        scanf("%s", &st[i].name);
        printf("\n");
        printf("Enter your age:");
        scanf("%d", &st[i].age);
        printf("\n");
		printf("Enter your Add.: ");
        scanf("%s", &st[i].add);s
        printf("\n");
    }
    printf("\nID:\tName:\tAge:\tAdd:\n");
    for (i = 0; i < count; i++)
    {
        printf("\n%d\t %s \t %d \t %s",st[i].id, st[i].name, st[i].age, st[i].add);
    } 
}

