#include<iostream>
using namespace std;

int main()
{
    string s ="Hello";
    for(int i=0;i<=s.length();i++)
    {
        if(i==1)
        {
            s[i]='a';
        }

    }
    cout<<s;
}
