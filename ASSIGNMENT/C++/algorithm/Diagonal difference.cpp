// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n)(n);
    int m1=0,m2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            
            if(a[i]==a[j]){
                m1+=a[i][j];
                
            }
           
        }
    }
    
   // cout<<m1<<endl;
for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            if(i+j==n-1){
                m2+=a[i][j];
            }
}
}
//cout<<m2;

int diff;
diff=abs(m1-m2);
cout<<diff;
    return 0;
}
