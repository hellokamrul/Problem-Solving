#include<iostream>
using namespace std;

void series(int num)
{
    int t1=0,t2=1,next;
    for(int i=1;i<=num;i++)
    {
        cout<<t1<<endl;
        next = t1+t2;
        t1=t2;
        t2=next;
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    series(n);
}
