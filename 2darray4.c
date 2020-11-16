#include<stdio.h>
void main()
{
  int i,j,a[3][3];
  int k,l,temp,ce=0,co=0;

  printf("Scan 2d array::\n");
  for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     scanf("%d",&a[i][j]);

   }

  printf("Display 2d Matrix:\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<4;j++)
   printf("%d ",a[i][j]);

   printf("\n");
  }


  printf("2d to 1d\n");
  for(k=0;k<9;k++)
  printf("%d ",a[0][k]);


  for(k=0;k<9;k++)
  {
    for(l=0;l<8;l++)
     {
       if(a[0][l]>a[0][l+1])
         {
           temp=a[0][l];
           a[0][l]=a[0][l+1];
           a[0][l+1]=temp;
        }
     }
   }

  printf("\nSorted:\n");
  for(k=0;k<9;k++)
  printf("%d "a[0][k]);

  printf("\nMax=%d",a[0][8]);
}

