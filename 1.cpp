#include<bits/stdc++.h>
int h=0;
int check(std::string s,int len,int x,int count)
{
    int i,y=0,x1=0,j;
    char temp;
    for(i=x;i<len;i++)
    {
        if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122)
        {
            if(y==1)
            {
                x=i;
                break;
            }
            temp=s[i];
            y++;
        }
        if(s[i]>=48&&s[i]<=57)
        {
            x1=x1*10+(int)s[i]-48;
        }
       
    }
    for(j=0;j<x1;j++)
    {
        std::cout<<temp;
    }
    x1=0;
    temp='\0';
   if(h!=count)
   {
       h++;
       check(s,len,x,count);
   }
}
int main()
{
    std::string s;
    std::cin>>s;
    int len=s.size(),i,count=0;
    for(i=0;i<len;i++)
    {
        if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122)
        {
            count++;
        }
    }
    check(s,len,0,count);
}