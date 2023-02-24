// CPP program to convert string
// to char array
#include <iostream>
#include <string>

using namespace std;

// driver code
int main()
{
	// assigning value to string s
	int d;
	cin>>d;
	string s= to_string(d);
	// declaring character array : p
	char p[s.length()];

	int i;
	for (i = 0; i < sizeof(p); i++) {
		p[i] = s[i];
		int a = p[i];
		//cout << p[i];
		cout<<a<<endl;
	}
	return 0;
}
