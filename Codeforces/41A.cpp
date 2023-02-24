#include <bits/stdc++.h>
using namespace std;

int main()
{

	int i=0, j;
	int x=0;

	string s,t;
	cin>>s>>t;

		for (j=t.length()-1; j>=0 ; j--)
		{

		    if(s[i++]==t[j])
            {
                //cout<<"YES";

            }
            else if(s[i++]!=t[j])
                {
                //cout<<"NO";
                x=x+1;
            }
            //cout<<t;

		}

		if(x==0)
        {
            cout<<"YES";
        }
        else if(x!=0)
        {
            cout<<"NO";
        }

	return 0;
}
