#include<stdio.h>
int main()
{
    int n,m;
    int a[100],i=0,j=0,b[100],c[100],h;
    while(std::cin>>n)
    {
        a[i]=n;
        i++;
    }
    while(std::cin>>m)
    {
        b[j]=m;
        j++;
    }
    int k=0;
    for(h=0;h<i;h++)
    {
        c[k]=a[h];
        k++;
    }
    for(h=0;h<j;h++)
    {
        c[k]=b[h];
        k++;
    }
    int temp=0;
    for(h=0;h<k-1;h++)
    {
        for(i=0;i<k-1;i++)
        {
            if(c[i]>c[i+1])
            {
               temp=c[i];
               c[i]=c[i+1];
               c[i+1]=temp;
            }
        }
    }
    for(h=0;h<k;h++)
    {
        std::cout<<c[h];
    }
}