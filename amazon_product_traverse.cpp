#include<bits/stdc++.h>
int print(int a[],int i,int x)
{
    int sum=1,j;
    for(j=x;j<i;j++)
    {
        sum*=a[j];
    }
    if(sum!=1)
    {
    std::cout<<sum<<" ";
    }
    if(x!=i)
    {
        x++;
        print(a,i,x);
    }
}
int main()
{
    int n;
    int a[100],i=0;
    while(std::cin>>n)
    {
        a[i]=n;
        i++;
    }
    int j;
    print(a,i,0);
}