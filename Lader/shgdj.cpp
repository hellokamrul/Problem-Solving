#include <iostream>
#include <string>
using namespace std;

int main() {
   int n,m=1;
   cin>>n;
   if(0<n && n<19)
   {
     for(int i=1;i<=n;i++)
     {
       m = m*i;
       //i++;
     }
     cout<<m;
   }

  return 0;

}
