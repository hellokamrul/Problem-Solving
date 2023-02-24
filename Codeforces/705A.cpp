#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string a = "I hate";
    string b = "I love";

    for(int i=1;i<=n;i++)
    {

        if(i%2!=0)
        {
            if(i>1)
                {
                    cout<<" that ";
                }
            cout<<a;
        }


       else if(i%2==0)
         {
             if(i<=n)
                {
                    cout<<" that ";
                }
              cout<<b;
         }

        if(i==n)
         {
             cout<<" it";
         }
    }


}
