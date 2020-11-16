#include<stdio.h>

void main()
{
  int i,j,a1[3][3],a2[3][3],a3[3][3];

  printf("Enter matrix1:\n");
  for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     scanf("%d",&a1[i][j]);

   }
   
  printf("Enter matrix2:\n");
  for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     scanf("%d",&a2[i][j]);

   }

   printf("Display matrix1:\n");
   for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   printf("%d ",a1[i][j]);

   printf("\n");
  } 

  printf("Display matrix2:\n");
   for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   printf("%d ",a2[i][j]);

   printf("\n");
  } 

   printf("\nSum:\n");
   for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    {
      a3[i][j]=a1[i][j]+a2[i][j];
      printf("%d ",a3[i][j]);
    }

    printf("\n");
  }
} 

