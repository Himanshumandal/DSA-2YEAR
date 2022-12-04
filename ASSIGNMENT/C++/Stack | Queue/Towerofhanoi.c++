#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void towerOfHanoi(int n, char src, 
                    char tar, char a)  
{  
    if (n == 1)  
    {  
        cout << "Moving ring 1 from " << src << " to " << tar<<endl;  
        return;  
    }  
    towerOfHanoi(n - 1, src, a, tar);  
    cout << "Moving ring " << n << " from " << src << " to " << tar<< endl;  
    towerOfHanoi(n - 1, a, tar, src);  
}  
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin>> N;
    towerOfHanoi(N,'A','B','C');
    return 0;
}
