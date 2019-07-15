#include<bits/stdc++.h>
int count=0,count1=0;
int chess(int n,int x,int y,int k,int kx1,int ky1)
{
    int i,j,k1=1,m=n-1,f=0,f1=0,f2=0,f3=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==kx1+1&&j==ky1+1)
            {
                count++;
                kx1++;
                ky1++;
            }
            if(i==j&&f==0)
            {
                if(i!=n/2)
                {
                    count1++;
                }
            }
            if(i==n/2&&j>=0&&f1==0)
            {
                if(j!=n/2)
                {
                   count1++;
                }
            }
            if(j==n/2&&i>=0&&f2==0)
            {
                if(i!=n/2)
                {
                  count1++;
                }
            }
            if(i==k1&&j==m&&f3==0)
            {
                if(i!=n/2&&j!=n/2)
                {
                    count1++;
                }
                k1++;
                m--;
            }
        }
    }
    std::cout<<count1-count;
}
int main()
{
    int n,x,y,k;
    std::cin>>n>>x>>y>>k;
    int kx1,ky1;
    if(k!=0)
    {
        std::cin>>kx1>>ky1;
    }
    chess(n,x,y,k,kx1,ky1);
}