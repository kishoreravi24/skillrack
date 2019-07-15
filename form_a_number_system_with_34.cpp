#include<bits/stdc++.h>
int main()
{
    int a=3,b=4;
    int a1[100];
    a1[0]=a;
    a1[1]=b;
    int i,k=0;
    for(i=2;i<15;i+=2)
    {
        a1[i]=a1[k]*10+a;
        a1[i+1]=a1[k]*10+b;
        k++;
    }
    for(i=0;i<15;i++)
    {
        std::cout<<a1[i]<<" ";
    }
}
