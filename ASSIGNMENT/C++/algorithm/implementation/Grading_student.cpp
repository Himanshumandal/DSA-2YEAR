#include <iostream>
#include<vector>
using namespace std;
int main(){
    int n,rem,i,g;
    cin>>n;
   vector<int>a(n);
    for(i=0;i<n;i++){
     //  g=a[i];
       cin>>a[i];
       if(a[i]>=38){
       rem=a[i]%5;
       if(rem>=3)
           a[i]+=5-rem;
       }
       cout<<a[i]<<endl;
    }
    
}
