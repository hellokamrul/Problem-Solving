#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int x=0;
    int y=0;

    for(int i =0;i<=s.length()-1;i++)
    {
        //cout<<s[i];
        for(int j=t.length()-1;j>=0;j--)
        {
           // cout<<t[j];
            if(s[i]==t[j])
            {
                x=x+1;
                break;
            }

           else if(s[i]!=t[j])
            {
                //cout<<"NO";
                y=y+1;
                break;
            }
            break;

        }
    }
    cout<<x<<endl<<y<<endl;
        if(y==0)
        {
            cout<<"YES";
        }
        else if(y!=0)
        {
            cout<<"NO";
        }



}
