#include<iostream>
using namespace std;

int main()
{
    int n,x=0,c=0;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        //cout<<i;

        if(i%2==0)
        {
            x=x+i;
        }

       else
        {
            x=x-i;
        }
    }
    cout<<x;


    return 0;

}
