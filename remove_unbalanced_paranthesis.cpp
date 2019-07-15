#include<bits/stdc++.h>
int main()
{
    std::string s;
    std::cin>>s;
    int i,a[s.size()][s.size()],b[s.size()][s.size()];
    int k=0,k1=1,k2=0,k3=1,j;
    for(i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='(')
        {
            a[k][0]=k1;
            a[k][1]=i;
            k++;
            k1++;
        }
        else if(s[i]==')')
        {
            b[k2][0]=k3;
            b[k2][1]=i;
            k2++;
            k3++;
        }
    }
    int count=0;
  for(i=0;i<k;i++)
  {
      for(j=0;j<k2;j++)
      {
          if(a[i][0]!=b[j][0])
          {
              count++;
          }
      }
      if(count==k2)
      {
          s[a[i][1]]='@';
      }
      count=0;
  }
  for(i=0;i<s.size();i++)
  {
      if(s[i]!='@')
      {
      std::cout<<s[i];
      }
  }
}
