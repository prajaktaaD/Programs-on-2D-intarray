#include<stdio.h>
void main()
{
  int i,j,a[3][3];

  printf("Scan 2d array::\n");
  for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     scanf("%d",&a[i][j]);

   }

  printf("Display 2d Matrix:\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   printf("%d ",a[i][j]);

   printf("\n");
  }
  
  int f=0;

  for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
      {
        if(i!=j)
         {
           if(a[i][j]==0)
            {
              f=1;
              break;
            }
         }
      }
    }

  if(f==1)
  printf("\nDiagonal\n");

  else
  printf("\nNot Diagonal\n");

}
