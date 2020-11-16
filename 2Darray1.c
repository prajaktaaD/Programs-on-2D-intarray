#include<stdio.h>

void main()
{

  int i,j;
  printf("Enter ele of 2d matrix:\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    scanf("%d",&a[i][j]);
  }

  printf("Display 2d Matrix:\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<4;j++)
   printf("%d ",a[i][j]);

   printf("\n");
  }
}
