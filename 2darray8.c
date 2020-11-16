#include<stdio.h>
void main()
{
  int i,j,a[3][3],at[3][3];

  printf("\nScan 2d array::\n");
  for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     scanf("%d",&a[i][j]);

   }

  printf("\nDisplay 2d Matrix:\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   printf("%d ",a[i][j]);

   printf("\n");
  }

  printf("\nThe Transpose of matrix:");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    {
      at[i][j]=a[j][i];
      printf("%d ",at[i][j];
    }
   printf("\n");
  }
