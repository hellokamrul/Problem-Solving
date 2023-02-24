#include<iostream>
using namespace std;

int main()
{
    int a[5][5];
    int i,j,c,p;

    for(i=0;i<5;i++)
	  {
	  	for(j=0;j<5;j++)
	  	{
	  		cin>>a[i][j];
	  		if(a[i][j]==1)
            {

                if(i>2)
                {
                  c = i - 2;

                }
                else{
                c = 2-i;

                }
                if(j>2)
                {
                  p = j - 2;

                }
                else{
                p = 2-j;

              }


            }
		}

	  }
	  cout<<c+p;

}
