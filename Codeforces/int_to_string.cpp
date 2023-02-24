#include <iostream>
using namespace std;

int main() {
    int n=9876; //number to be converted

    string temp_str=to_string(n); //converting number to a string
    char const* number_array= temp_str.c_str(); //converting string to char Array

cout<<"Number converted to char array is: ";
    cout<<number_array[0];
    cout<<number_array[1];
    cout<<number_array[2];
    cout<<number_array[3];
    return 0;
}
