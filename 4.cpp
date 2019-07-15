#include<bits/stdc++.h>
int main()
{
    std::string s,s1;
    std::cin>>s>>s1;
    int len=s.size(),len1=s1.size(),i,j,x=0,count=0;
    int a[100],k=0;
   for(i=0;i<len;i++)
   {
       for(j=0;j<len1;j++)
       {
           if(s[i]==s1[j])
           {
               x=i;
               count++;
               break;
           }
           else
           {
               x=0;
           }
          
       }
      if(x!=0)
      {
          a[k]=x;
          k++;
      }
   }
  if(a[0]==0||k!=len1)
  {
      std::cout<<"-1";
  }
  else if(k==len1)
  {
      std::cout<<a[0];
  }
}