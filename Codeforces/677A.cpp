#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,h,c=0;
    cin>>n>>h;
  //  int a[n];

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        //a[i]=x;
        if(x<=h)
        {
            c=c+1;
        }
        else{
            c=c+2;
        }

    }

    cout<<c;

}
