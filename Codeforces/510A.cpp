#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin >>n>>m;
int a=0;
int b=0;
    for(int i=0;i<n;i++)
    {


        for(int j=0;j<m;j++)
            {
                if(i%2==0)
                {
                    b=0;
                    cout<<"#";
                }
                if(i%2!=0)
                {
                    b++;
                    if(((i/2)+1)%2!=0)
                      {
                        if(b!=m)
                        {
                          cout<<".";
                        }
                        else
                        {

                            cout<<"#";
                        }
                    }
                   else
                   {
                     if(b==1)
                        {
                          cout<<"#";
                        }
                        else
                        {

                            cout<<".";
                        }
                   }

                }
        }
            cout<<endl;
    }

}
