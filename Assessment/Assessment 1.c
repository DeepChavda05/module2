#include<stdio.h>
int main()
{
  int a[15][15],b[15][15],m[15][15];
  int i,j,r,c,t,k;
  printf("\nEnter The Rows : ");
  scanf("%d",&r);
  printf("\nEnter The Columns : ");
  scanf("%d",&c);
  printf ("--------------matrix 1--------------------\n");
  printf("\nEnter The Elements : ");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
       scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
        printf("\t%d",a[i][j]);
    }
    printf("\n");
  }
  printf("-------------------matrix 2---------------------\n");
  printf("\nEnter The Elements: ");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
       scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
       printf("\t%d",b[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      t=0;
      for(k=0;k<c;k++)
      {
         t+=(a[i][k]*b[k][j]);
      }
      m[i][j]=t;
    }
  }
  printf("\n-----------Result : multiplication matrix------------ \n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
       printf("\t%d",m[i][j]);
    }
    printf("\n");
  }
  return 0;
}
