#include<bits/stdc++.h>
int start(int a[100],int n,int y)
{
 int x=1,i,j,temp,count=0;
 for(i=1;i<=n;i++)
 {
     for(j=0;j<n;j++)
     {
         if(a[y]+x==a[j])
         {
             temp=a[j];
         }
         else
         {
             count++;
         }
     }
     if(count==n)
     {
         x++;
         count=0;
     }
     else
     {
        break;
     }
 }
  std::cout<<a[y]<<"->"<<temp<<" ";
         if(y<n-1)
         {
         y++;
         temp=0;
         count=0;
         start(a,n,y);
         }
}
int main()
{
    int n;
    int a[100],i=0,y=0;
    while(std::cin>>n)
    {
        a[i]=n;
        i++;
    }
    start(a,i,y);
    return 0;
}