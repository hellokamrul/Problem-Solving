#include<iostream>
using namespace std;

int main()
{
   long long int n,c;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2;
    }
    else if(n%2!=0)
    {
        cout<<-(n+1)/2;
    }
    return 0;
}
