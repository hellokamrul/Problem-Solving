#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int div;
    div =x/2;
    for (int i = 2; i <= x; i++)
    {
        if(x%i==0)
        {
            cout<<"Not Prime";
            break;
        }
        else
        {
            cout<<"prime";
            break;
        }

      }

    }



