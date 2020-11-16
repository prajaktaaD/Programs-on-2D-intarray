#include<stdio.h>
void main()
{
  int i,j,a[4][4],s;

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


  printf("\nSum of each row:\n");
  for(i=0;i<4;i++)
   {
    s=0;
    printf("\nR%d:",i);
    for(j=0;j<4;j++)
       s=s+a[i][j];
     
    printf("%d\n",s);
   }
}

