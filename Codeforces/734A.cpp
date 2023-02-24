#include<iostream>
#include<string>
using namespace std;

int main()
{

    int a;
    cin>>a;
    string s;
    cin>>s;
    int i;
    int x=0;
    int y=0;

//    for(i=0;i<=a-1;i++)
//    {
//        cin>>s[i];
//    }
    for(i=0;i<=a-1;i++)
    {
        if(s[i]=='D')
        {
            x=x+1;
        }
        else if(s[i]=='A')
        {
            y=y+1;
        }

    }
    if(x==y)
    {
       cout<<"Friendship";
    }
    else if(x>y)
    {
        cout<<"Danik";
    }

    else if(x<y)
    {
        cout<<"Anton";
    }
    return 0;
}
