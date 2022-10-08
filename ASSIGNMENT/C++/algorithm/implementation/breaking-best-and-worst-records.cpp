// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n,min,max,c1=0,c2=0;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
    
}
min=a[0];
max=a[0];
for(int i=0;i<n-1;i++){
    if(a[i+1]>max)
    {
        c1++;
        max=a[i+1];
    }
    
}
cout<<c1<<" ";
for(int i=0;i<n-1;i++){
    if(a[i+1]<min)
    {
        c2++;
        min=a[i+1];
    }
   
}
cout<<c2; 
return 0;
}
