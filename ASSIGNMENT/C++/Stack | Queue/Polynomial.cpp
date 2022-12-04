#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int* mulpol(int arr1[], int arr2[], int size1, int size2)
{
   int* a=new int[size1+size2-1];
   for (int i = 0; i<size1+size2; i++)
     a[i] = 0;
   for (int i=0; i<size1; i++)
   {
     for (int j=0; j<size2; j++)
         a[i+j] += arr1[i]*arr2[j];
   }


   return a;
}
int main(){
    int p, j,e;
    cin >> p;
    while(p>0){
        cin >> j >> e;
        int arr[j], arry[e];
        for (int i=0; i<j; i++){
            cin >> arr[i];
        }
        for (int i=0; i<e; i++){
            cin >> arry[i];
        }
        int* a=mulpol(arr, arry, j, e);
        for(int k=0;k<(e+j);k++){
            cout<<a[k]<<" ";
        }
        cout<<endl;
        p--;
    }
    return 0;

}
