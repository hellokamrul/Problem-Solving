#include<iostream>
#include<string>
using namespace std;

int main()
{
     int n,x=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int m,f;
        cin>>m;
        if(m+2<f)
        {
          x=x+1;
        }
    }
    cout<<x;

}
