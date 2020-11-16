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

  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    {
      if(a[i][j]%2==0)
      ce++;
      
      else
      co++;
     }
  }
  
  printf("\nNum of even ele:%d \nNum of odd ele:%d\n",ce,co);   

}

