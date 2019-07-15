#include<bits/stdc++.h>
#include<math.h>
int sum=0;
int start(int a[100],int n,int x)
{
    if(x>=0)
    {
        sum+=a[x]*pow(2,x);
        x--;
        start(a,n,x);
    }
    return sum;
}
int main()
{
    int n;
    std::cin>>n;
    int a[100],i=0;
    while(n!=0)
    {
        a[i]=n%10;
        i++;
        n/=10;
    }
    int x=i-1;
    std::cout<<start(a,i,x);
}