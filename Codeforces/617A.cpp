#include<iostream>
using namespace std;

int main()
{
    int n;
    //cout<<"The coordinate of the friend's house: ";
    cin>>n;
    if(n<=5)
    {
        int x =1;
        cout<<x;
    }
    else if(n>5)
    {
        if(n%5==0)
        {
            int x = n/5;
            cout<<x;
        }
        else
        {
            int x = (n/5)+1;
            cout<<x;
        }
    }
    return 0;
}
