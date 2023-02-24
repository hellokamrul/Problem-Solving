#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,e=0,h=0;
    cin>>n;
  //  int a[n];

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        //a[i]=x;
        if(x==0)
        {
            e=e+1;
        }
        else{
            h=h+1;
        }
    }

    if(n==e)
    {

        cout<<"EASY";
    }
    else if(n==h){
        cout<<"HARD";
    }
    else if(h<e)
    {
       cout<<"HARD";
    }
    else
    {
        cout<<"EASY";
    }



}

