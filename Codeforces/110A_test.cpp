#include<iostream>
#include<string>
#include <sstream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0;
    int b=0;
    string s = to_string(n);
    //char p[s.length()];
    for(int i=0;i< s.length();i++)
    {


        if(s[i]!='7' && s[i]!='4')
        {
            a=a+1;
        }
        else if(s[i]=='7')
        {
            b=b+1;
        }
        else if(s[i]=='4')
        {
            b=b+1;
        }
    }


         if(a>=1)
            {
                cout<<"NO";
                //break;

            }
            else if(b==1)
            {
                cout<<"NO";
            }
            else
            {
                cout<<"YES";
                //break;
            }
}
