#include <iostream>
using namespace std;

int main()
{
    int a,x,y,z,xsum=0,ysum=0,zsum=0;
    cin>>a;

    //int y=0;
    for(int i=0;i<a;i++)
    {
       cin>>x>>y>>z;

        xsum +=x;
        ysum +=y;
        zsum +=z;
    }
   // cout<<endl<<y;
    if(xsum == 0 && ysum == 0 && zsum == 0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


}
