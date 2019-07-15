#include<bits/stdc++.h>
int chess1(int,int,int,int,int,int);
int count=0;
int chess(int n,int x,int y,int k)
{
    int i,j,k1=0,m=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                if(i!=0)
                {
                count++;
                }
            }
            if(i==k1&&j==m)
            {
                if(i!=n/2&&j!=n/2)
                {
                count++;
                }
                k1++;
                m--;
            }
           
            if(i>=0&&j==n/2)
            {
                if(i!=n/2)
                {
                    count++;
                }
            }
           
            if(i==n/2&&j>=0)
            {
                if(j!=n/2)
                {
                    count++;
                }
            }
           
        }
      
    }
    std::cout<<count;
}
int chess1(int n,int x,int y,int k,int kx1,int ky1)
{
    int i,j,k1=0,m=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         if(i!=kx1&&j!=ky1)
         {  
            if(i==j)
            {
                if(i!=0)
                {
                count++;
                }
            }
         }
            if(i!=kx1&&j!=ky1)
            {
            if(i==k1&&j==m)
            {
                if(i!=n/2&&j!=n/2)
                {
                count++;
                }
                k1++;
                m--;
            }
            }
           if(i!=kx1&&j!=ky1)
           {
            if(i>=0&&j==n/2)
            {
                if(i!=n/2)
                {
                    count++;
                }
            }
           }
           if(i!=kx1&&j!=ky1)
           {
            if(i==n/2&&j>=0)
            {
                if(j!=n/2)
                {
                    count++;
                }
            }
           
           }
        
        }
    }
    std::cout<<count;
}
int main()
{
    int n,x,y,k;
    std::cin>>n;
    std::cin>>x>>y;
    std::cin>>k;
    if(k!=0)
    {
        int kx1,ky1;
        std::cin>>kx1>>ky1;
        chess1(n,x,y,k,kx1,ky1);
    }
    else
    {
    chess(n,x,y,k);
    }
}