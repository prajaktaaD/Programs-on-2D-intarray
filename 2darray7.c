#include<stdio.h>
 void main()
{
  int i,j,a[4][4],s=0;

  printf("Scan 2d array::\n");
  for(i=0;i<4;i++)
   {
     for(j=0;j<4;j++)
     scanf("%d",&a[i][j]);

   }

  printf("Display 2d Matrix:\n");
  for(i=0;i<4;i++)
  {
   for(j=0;j<4;j++)
   printf("%d ",a[i][j]);

   printf("\n");
  }
  
  for(i=0;i<4;i++)
  {
   for(j=0;j<4;j++)
    {
      if(i=j)
       {
         s=s+a[i][j];
       }
     }
   }

  printf("\nTne sum of diagonal ele=%d\n",s+a[0][0]);
}


