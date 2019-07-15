#include<bits/stdc++.h>
int main()
{
    std::string s;
    std::cin>>s;
    int i,j,len=s.size(),g=0;
    int k=len-1;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            if(i==j)
            {
                if(i!=len/2)
                {
                std::cout<<" "<<s[i]<<" ";
                }
                else
                {
                    std::cout<<" ";
                }
            }
            if(i==g&&j==k)
            {
                std::cout<<" "<<s[i]<<" ";
                g++;
                k--;
                
            }
            else
            {
                std::cout<<" ";
            }
            
        }
        std::cout<<"\n";
    }
}