#include<iostream>
using namespace std;

int main()
{
    int n,thousand=0,fiveH=0,hundred=0,fifthy=0,twenty=0,ten=0,five=0,two=0,one=0;
    cin>>n;
    while(n>0){
    if(n>=1000)
    {
        n=n-1000;
        thousand = thousand+1;
    }
    else
    {
        if(n>=500)
        {
            n = n-500;
            fiveH =fiveH+1;

        }
        else if(n>=100)
        {
            n = n-100;
            hundred =hundred+1;

        }
        else if(n>=50)
        {
            n = n-50;
            fifthy =fifthy+1;

        }
        else if(n>=50)
        {
            n = n-50;
            fifthy =fifthy+1;

        }
        else if(n>=20)
        {
            n = n-20;
            twenty =twenty+1;

        }
        else if(n>=10)
        {
            n = n-10;
            ten =ten+1;

        }
        else if(n>=5)
        {
            n = n-5;
            five =five+1;

        }
        else if(n>=2)
        {
            n = n-2;
            two =two+1;

        }
         else if(n>=1)
        {
            n = n-1;
            one =one+1;

        }
    }
//        else
//        {
//            break;
//        }

    }
    if(thousand!=0)
    {
       cout<<"1000"<<" "<<thousand<<endl;
    }
    if(fiveH!=0)
    {
        cout<<"500"<<" "<<fiveH<<endl;
    }
    if(hundred!=0)
    {
        cout<<"100"<<" "<<hundred<<endl;
    }
    if(fifthy!=0)
    {
        cout<<"50"<<" "<<fifthy<<endl;
    }
    if(twenty!=0)
    {
        cout<<"20"<<" "<<twenty<<endl;
    }
    if(ten!=0)
    {
        cout<<"10"<<" "<<ten<<endl;
    }
    if(five!=0)
    {
        cout<<"5"<<" "<<five<<endl;
    }
    if(two!=0)
    {
       cout<<"2"<<" "<<two<<endl;
    }
    if(one!=0)
    {
        cout<<"1"<<" "<<one<<endl;
    }
}
