#include<bits/stdc++.h>
int main()
{
    std::string s;
    getline(std::cin,s);
    int len=s.size(),i,j=0;
    int str[len];
    for(i=0;i<len;i++)
    {
        if(s[i]>=97&&s[i]<=122||s[i]>=48&&s[i]<=57)
        {
        }
        else if(s[i]!=32)
        {
            str[j]=i;
            j++;
        }
       
    }
    int x,k=0;
   for(i=len-1;i>=0;i--)
   {
       x=len-str[k]-1;
       if(x==i)
       {
           std::cout<<" "<<s[str[k]];
           k++;
       }
       else if(str[k]!=i)
       {
           std::cout<<s[i];
       }
   }
}