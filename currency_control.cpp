#include<bits/stdc++.h>
int count=0,x,y=0;
int check(int a[],int n)
{
    int i;
    for(i=y;i<9;i++)
    {
        if(n>=a[i])
        {
            count++;
            x=i;
            n-=a[i];
            check(a,n);
            break;
        }
        else
        {
            if(count!=0)
            {
            std::cout<<a[x]<<" "<<count<<"\n";
            }
            y++;
            count=0;
            if(y<=9&&n!=0)
            {
                check(a,n);
            }
            break;
        }
    }
}
int main()
{
    int n;
    std::cin>>n;
    int a[]={2000,500,200,100,50,20,10,5,1};
    std::cout<<"Currency count\n";
    check(a,n);
}