#include<stdio.h>
int main()
{
    int i,j,n,temp[10][10];
    int c=0;
    int k=0;
    scanf("%d",&n);
    int a[10][10];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(i==1)
        {
            for(j=n-1;j>=0;j--)
            {
                printf("%d",a[i][j]);
            }
        }
        else
        {
            for(j=0;j<n;j++)
            {
                printf("%d",a[i][j]);
            }
        }
        printf("\n");
    }
  //a[i][j] la values iruku bro..
  //c=0,k=0 already assigned
  for(i=n-1;i>=0;i--)
  {
      for(j=n-1;j>=0;j--)
      {
          temp[c][k]=a[i][j];//inga a[i][j] print pana reverse la answer varudu bro..
           k++;
           c++;
      }
      
  }
  for(c=0;c<n;c++)
  {
      for(k=0;k<n;k++)
      {
          printf("%d",temp[c][k]);
  }
  }
    return 0;
}
/*
input : 5
1 2 3 
4 5 6 
7 8 9

1 2 3
6 5 4
7 8 9
step 1: 1 2 3 6 5 4 7 8 9
step 2:9 8 7 4 5 6 3 2 1

output:5
*/
