#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a;
    cin>>a;
     int x= 0;

    //int x =

    for(int i=a;i>=a;i++)
    {
        x=i+1;

        string s = to_string(x);

        //cout<<s<<endl;||
        if(s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[3] && s[1]!=s[2] && s[2]!=s[3] )
        {
            cout<<s<<endl;

           break;
        }

        else{



            //cout<<"count : "<<i<<endl;
        }


    }
}
