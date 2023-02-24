#include <iostream>
using namespace std;

int main()
{
   int n,last;
    cin >> n;
    int x;
    cin>>x;
	//last=n % 10;
	for(int i=0;i<x;i++)
        {
            last=n % 10;
            if(last==0)
            {
                n=n/10;
            }
            else
            {
                n=n-1;

            }

        }
            cout<<n;
}
