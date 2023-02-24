#include<iostream>
#include<string>
#include <sstream>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int a=0;
    string s = to_string(n);
    //char p[s.length()];
    for(int i=0;i< s.length();i++)
    {
        if(s[i]=='7' || s[i]=='4')
        {
            a=a+1;
            //cout<<s[i]<<endl;
        }
    }

        if(a==4 || a==7)
            {
                cout<<"YES";
                //break;
            }
        else
                cout<<"NO";
                //break;
       //cout<<endl<<a;

}
