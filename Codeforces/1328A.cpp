#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    int y;

    for(int i=0;i<n;i++)
    {

       int x,y;
        cin>>x>>y;

        if(x%y==0)
        {
            cout<<0<<endl;
        }
        else {

                int w=x%y;

                cout<<y-w<<endl;

            }
    }
}
