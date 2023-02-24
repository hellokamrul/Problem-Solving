#include<iostream>
using namespace std;

int main()
{
    int n;

   double p,x,c=0;;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        c=c+x;

    }
    p=(c/n);
    cout<<p;
//    for(int i=0;i<n;i++)
//    {
//
//        c=c+x[i];
//
//    }


    //cout<<c;
    return 0;

}
