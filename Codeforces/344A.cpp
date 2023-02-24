#include<iostream>
#include<string>
using namespace std;

int main()
{

    int n,p=0;
    cin>>n;
    int x[100000];


    for(int i=0;i<n;i++)
    {
        cin>>x[i];


    }
     for(int i=0;i<n;i++)
    {
       // cout<<x[i];
        if(x[i]!=x[i+1])
        {
            p=p+1;
            //break;
        }



        //cout<<s[i]<<endl;
    }
    //cout<<x[2];
    cout<<p;
}
