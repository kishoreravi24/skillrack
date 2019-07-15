#include<bits/stdc++.h>
int main()
{
    int n;
    std::cin>>n;
    int i,j,k=0,k1=0,k2=0,k3=0,k4=1;
    for(i=0;i<=n+n;i++)
    {
        for(j=0;j<=n+n;j++)
        {
            if(i==0&&j==n||i==(n+n)&&j==n)
            {
                std::cout<<0<<" ";
            }
            else if(i!=0&&i!=(n+n))
            {
               if(j>=n-k)
               {
                   std::cout<<k1<<" ";
                   k1++;
               }
               if(j==n)
               {
                   std::cout<<k2<<" ";
                   k3=k2;
               }
               if(j>=(n)+k4)
               {
                   k3--;
                   std::cout<<k3<<" ";
               }
            }
            else
            {
                std::cout<<"*"<<" ";
            }
          
            
        }
        k++;
        k1=0;
        k2++;
        k4++;
        std::cout<<"\n";
    }
}
