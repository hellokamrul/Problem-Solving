#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int x= 5;
    int n;
    cout<<"element number:";
    cin>>n;

    for(int i = 0; i<x;i++)
    {
        if(arr[i]==n)
        {
            for(int j =i;j<x-1;j++)
            {

                arr[j]= arr[j+1];
            }
        }

    }

    for(int i = 0; i<x-1;i++)
    {
        cout<<arr[i];
    }

}
