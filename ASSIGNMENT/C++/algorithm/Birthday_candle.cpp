
#include <iostream>
#include<vector>
using namespace std;

int main() {
   int n,count=0;;
   cin>>n;
   vector<int>a(n);
   int max=a[0];
   for(int i=0;i<n;i++){
       cin>>a[i];
       if(a[i]>max){
           max=a[i];
       }
            }
            for(int i=0;i<n;i++){
            if(a[i]==max){
                count++;
            }
            }
        cout<<count;
       
  
   

    return 0;
}
