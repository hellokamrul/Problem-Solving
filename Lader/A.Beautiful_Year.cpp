#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;

    n=n+1;
    for(int i=1;i<1000;i++)
    {
        string s;
        s = to_string(n);
        if(s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] != s[3]&& s[2] != s[3])
        {
            cout<<n;
            break;
        }
        else{
            n=n+1;
        }
    }
}
