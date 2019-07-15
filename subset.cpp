#include<bits/stdc++.h>
int k=0;
int start(int a[100],int i,int x)
{
    int j,f,temp=0,count[100];
    for(f=0;f<i-1;f++)
    {
        if(f+x<i)
        {
        for(j=f;j<=f+x;j++)
        {
           temp+=a[j];
        }
    std::cout<<temp<<" ";
    temp=0;
        }
        
    }
    if(x<i/2+1)
    {
    
        x++;
        start(a,i,x);
    }
}
int main()
{
    int n,x=1;
    int a[100],i=0;
    while(std::cin>>n)
    {
        if(n>0)
        {
            a[i]=n;
            i++;
        }
    }
    start(a,i,x);
}