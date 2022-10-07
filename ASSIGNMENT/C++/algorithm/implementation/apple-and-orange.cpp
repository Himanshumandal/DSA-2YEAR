// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
   int s,t,a,b,m,n,sum=0,tot=0,u=0,v=0;
   cin>>s>>t>>a>>b>>m>>n;
   vector<int>c(m),d(n);
   for(int i=0;i<m;i++){
       cin>>c[i];
   }
   for(int i=0;i<n;i++){
       cin>>d[i];
   }
for(int i=0;i<m;i++)
{
    sum=a+c[i];
    if(sum>=s&&sum<=t){
        u=u+1;
    }
}
for(int i=0;i<n;i++)
{
    tot=b+d[i];
    if(tot>=s&&tot<=t){
        v++;
    }
}
cout<<u<<"\n"<<v;
    return 0;
}
