#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,N;
    int a[5][5]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if((i==0)||(i==N-1)||(j==0)||(j==N-1))
            {
            printf("*");
            }
            else
            {
               if((i==1)&&(j==1))
               {
                   for(i=0;i<1;i++)
                   {
                       for(j=0;j<3;j++)
                       {
                           printf("%d",a[i][j]);
                       }
                   }
               }
               else if((i==2)&&(j==1))
               {
                  
                  for(i=1;i<2;i++)
                  {
                      for(j=0;j<3;j++)
                      {
                          if((i==1)&&(j==1))
                          {
                              printf("*");
                          }
                          else{
                              printf("%d",a[i][j]);
                          }
                      }
                  }
               }
               else if((i==3)&&(j==1))
               {
                   for(i=2;i<3;i++)
                   {
                       for(j=0;j<3;j++)
                       {
                           printf("%d",a[i][j]);
                       }
                   }
               }
            }
        }
        printf("\n");
    }
return 0;
}
/*
output:
*****
*123*
*4*6*
*789*
*****
*/
