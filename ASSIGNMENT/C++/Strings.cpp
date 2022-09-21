#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a,b,e;
  cin>>a>>b;
  int c=a.size();
  int d =b.size();
  cout<<c<<" "<<d<<endl;
  e=a+b;
  cout<<e<<endl;
  char sh;
  sh=a[0];
  a[0]=b[0];
  b[0]=sh;
    
  cout<<a<<" "<<b;
  
    return 0;
}
