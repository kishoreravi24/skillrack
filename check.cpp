#include<bits/stdc++.h>
int main()
{
    std::string s;
    std::cin>>s;
    int i,x;
    for(i=8;i<s.size();i++)
    {
        if(s[i]!='/')
        {
            if(s[i]=='.')
            {
                x=i;
            }
        }
        else
        {
            break;
        }
    }
    std::cout<<x;
}