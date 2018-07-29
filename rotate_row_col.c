#include<stdio.h>
int main()
{
    int i,j,n,a[10][10],row,x,col,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the row to reverse: ");
    scanf("%d",&row);
    x=row-1;
    for(i=0;i<n;i++)
    {
        if(i==x)
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
    printf("\nEnter the column to rotate: ");
    scanf("%d",&col);
    y=col-1;
  for(j=0;j<n;j++)
  {
      if(j==y)
      {
          for(i=n-1;i>=0;i--)
          {
              printf("%d",a[i][j]);
          }
      }
      else
      {
          for(i=0;i<n;i++)
          {
              printf("%d",a[i][j]);
          }
      }
      printf("\n");
  }
    return 0;
}
