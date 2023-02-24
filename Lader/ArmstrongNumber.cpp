#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int b=n;
    while(b>0)
    {
        int last = b%10;
        //sum = sum+ pow(last,3);
        sum+=last*last*last;
        b=b/10;
    }
    //cout<<sum;
    if(n==sum)
    {
        cout<<"ArmStrong Number";
    }
    else{
        cout<<"Nope";
    }
}
