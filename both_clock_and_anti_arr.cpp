#include<bits/stdc++.h>
int main()
{
    int n;
    std::cin>>n;
    int a[n],i,x,y,temp,j;
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    std::cin>>x>>y;
    for(i=0;i<x;i++)
    {
        temp=a[n-1];
        for(j=n-1;j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=temp;
    }
    for(i=0;i<y;i++)
    {
        temp=a[0];
        for(j=0;j<n-1;j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        std::cout<<a[i];
    }
}
