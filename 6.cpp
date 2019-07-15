#include<bits/stdc++.h>
int main()
{
    std::string s;
    getline(std::cin,s);
    int len=s.size(),i,j,m=0;
    char str[100][100],k=0;
    for(i=0;i<len;i++)
    {
        if(s[i]!=32)
        {
            str[m][k]=s[i];
            k++;
        }
        else
        {
            m++;
            k=0;
        }
    }
    int y=0;
    for(i=len-1;i>=0;i--)
    {
        if(s[i]==32)
        {
            y=i;
            break;
        }
    }
    for(i=y;i<len;i++)
    {
        std::cout<<s[i];
    }
    std::cout<<" ";
    for(i=m-1;i>=0;i--)
    {
        for(j=0;str[i][j]!='\0';j++)
        {
          std::cout<<str[i][j];  
        }
        std::cout<<" ";
    }
}