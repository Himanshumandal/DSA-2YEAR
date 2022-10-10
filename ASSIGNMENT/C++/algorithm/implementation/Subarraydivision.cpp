// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
   int n,m,d,sum=0,num=0;
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++){
       cin>>a[i];
       
   }
   cin>>d>>m;
   for(int i=0;i<n;i++){
       int sum=0;
       for(int j=0;j<m;j++){
           
           sum=sum+a[i+j]; 
           }
           if(sum==d){
              num++; 
           }
       }
       
       
   
   cout<<num;
   

    return 0;
}
