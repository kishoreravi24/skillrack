#include<bits/stdc++.h>
int main()
{
    int n;
    std::cin>>n;
    int a[n],i=0,j,count=0,x=0,x1,k;
    while(n!=0)
    {
        a[i]=n%10;
        i++;
        n/=10;
    }
    for(j=i-1;j>=0;j--)
    {
            if(a[j]>a[j-1])
            {
                count++;
            }
    }
    if(count==i)
    {
        std::cout<<"Not Possible";
        x=1;
    }
  
    if(x==0)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
                x1=j;
                break;
            }
        }
        int temp;
        temp=a[x1+1];
        a[x1+1]=a[0];
        a[0]=temp;
        for(j=i-1;j>x1;j--)
        {
            std::cout<<a[j];
        }
        for(j=0;j<=x1;j++)
        {
            std::cout<<a[j];
        }
        
    }
      else
    {
        count=0;
        for(j=i-1;j>=0;j--)
        {
            if(a[j]<a[j-1])
            {
                count++;
            }
        }
        if(count+1==i)
        {
            int temp;
            temp=a[1];
            a[1]=a[0];
            a[0]=temp;
        }
        for(j=i-1;j>=0;j--)
        {
            std::cout<<a[j];
            x=2;
        }
    }
}