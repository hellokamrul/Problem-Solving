#include<iostream>
using namespace std;

int main()
{
    int arr[9];
    int n;
    cout<<"Enter Numbers: ";
    for(int i = 0;i<9;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Element Number: ";
    cin>>n;
    for(int i=0;i<9;i++)
    {
        if(i==n)
        {
            for(int j=i;j<8;j++)
                arr[j]=arr[j+1];

        }

    }
        cout<<"Delete Successfully.....!"<<endl;
        cout<<"New Array"<<endl;

        for(int i = 0;i<8;i++)
        {
            cout<<arr[i]<<endl;
        }



}
