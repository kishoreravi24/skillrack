#include<bits/stdc++.h>
int main()
{
    int n;
    int a[1000],i=0;
    while(std::cin>>n)
    {
        a[i]=n;
        i++;
    }
    int temp=0,j,h=1,odd[i],k=0,num[i],m=0;
    for(j=0;j<i;j++)
    {
        if(h%2!=0)
        {
            odd[k]=a[j];
            k++;
        }
        else
        {
            num[m]=a[j];
            m++;
        }
        h++;
    }
    h=0;
   for(j=0;j<k-1;j++)
    {
        for(h=0;h<k-1;h++)
        {
            if(odd[h]<odd[h+1])
            {
                temp=odd[h];
                odd[h]=odd[h+1];
                odd[h+1]=temp;
            }
        }
    }
    for(j=0;j<m-1;j++)
    {
        for(h=0;h<m-1;h++)
        {
            if(num[h]>num[h+1])
            {
                temp=num[h];
                num[h]=num[h+1];
                num[h+1]=temp;
            }
        }
    }
    h=0;
        for(j=0;j<k;j++)
        {
            a[h]=odd[j];
            h+=2;
        }
        h=1;
        for(j=0;j<m;j++)
        {
            a[h]=num[j];
            h+=2;
        }
   for(j=0;j<i;j++)
   {
       std::cout<<a[j];
   }
}