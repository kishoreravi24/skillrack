#include<bits/stdc++.h>
int main()
{
    int n;
    std::cin>>n;
    int i;
    char e;
    std::string s[n];
    for(i=0;i<n;i++)
    {
        std::cin>>e;
        std::cin>>s[i];
    }
   std::string s1,s2,s3,s4,s5,s6;
   int j,g=0,g1=0,sum[n],k=0;
   for(i=0;i<n;i+=2)
   {
       g=0;
       g1=0;
      if(i!=n-1)
      {
          s1=s[i];
          s2=s[i+1];
          for(j=0;j<s1.size();j++)
          {
              if(s1[j]!=':'&&g==0)
              {
                  s3+=s1[j];
              }
              else
              {
                  if(g==1)
                  {
                      s4+=s1[j];
                  }
                  g=1;
              }
          }
          for(j=0;j<s2.size();j++)
          {
              if(s2[j]!=':'&&g1==0)
              {
                  s5+=s2[j];
              }
              else
              {
                  if(g1==1)
                  {
                      s6+=s2[j];
                  }
                  g1=1;
              }
          }
          int a = atoi(s3.c_str());
          int b = atoi(s5.c_str());
          int c = atoi(s4.c_str());
          int d = atoi(s6.c_str());
          sum[k]=abs((abs(a-b)*60-abs(c-d)));
          k++;
          s3.clear();
          s4.clear();
          s5.clear();
          s6.clear();
      }
   }
 for(i=0;i<k;i++)
 {
     std::cout<<sum[i]<<" ";
 }
}

