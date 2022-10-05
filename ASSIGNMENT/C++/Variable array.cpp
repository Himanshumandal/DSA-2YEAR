#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    vector<vector<int>>nvector;
    int size,val;
    cin>>n>>q;
    for(int i=0;i<n;i++){
        vector<int>ivector;
        cin>>size;
        for(int j=0;j<size;j++){
            cin>>val;
            ivector.push_back(val);
        }
        nvector.push_back(ivector);
    }
    int col,row;
     for(int k=0;k<q;k++){
         cin>>col>>row;
         cout<<nvector[col][row]<<endl;
     } 
    return 0;
}
