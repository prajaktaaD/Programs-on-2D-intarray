#include<stdio.h>

void main()
{
  int i,j,s=0;
  
  printf("Scan 2d array::\n");
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

  for(i=0;i<3;i++)
  {
   for(j=0;j<4;j++)
   s=s+a[i][j];
  }

  printf("Sum=%d\n",s);
}

