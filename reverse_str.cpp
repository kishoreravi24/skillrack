#include<bits/stdc++.h>
int main()
{
    std::string s;
    getline(std::cin,s);
    int len=s.size(),i,j=0,k=0;
    int count[len];
    char str[len][len];
    for(i=0;i<len;i++)
    {
        if(s[i]!=32)
        {
            str[j][k]=s[i];
            k++;
        }
        else
        {
            count[j]=k;
            k=0;
            j++;
        }
    }
    k=0;
    int m=0;
    for(i=j-1;i>=0;i--)
    {
        for(m=0;m<count[k];m++)
        {
        std::cout<<str[i][m];
        }
        std::cout<<" ";
        k++;
    }
    
}