#include <iostream>
#include <string>

using namespace std;


int main()
{

	string s;
	cin>>s;
	 int Scount = 0;
     int Ccount = 0;

	char p[s.length()];

	int i;
	for (i = 0; i < sizeof(p); i++) {

		p[i] = s[i];
        int a = p[i];

        //small
        if(a>=97 && a<=122)
        {
            Scount = Scount+1;
        }

        //capital
        else
            Ccount = Ccount+1;
	}

	for (i = 0; i < sizeof(p); i++) {

		p[i] = s[i];
        int a = p[i];

	if(Ccount>Scount)
        {
            if(a>=97 && a<=122)
            {
               p[i] = s[i]-32;
               //cout<<p[i];
            }
            cout<<p[i];
        }

         else if(Ccount<Scount)
        {
            if(a>=65 && a<=90)
            {
               p[i] = s[i]+32;
               //cout<<p[i];
            }
            cout<<p[i];
        }
        else if(Ccount==Scount)
        {
            if(a>=65 && a<=90)
            {
               p[i] = s[i]+32;
               //cout<<p[i];
            }
             cout<<p[i];
        }
        //cout<<p[i];
	}



	return 0;
}

