
#include <iostream>
using namespace std;
void towerofdisc(int ,char,char,char);

int main() {
    int totaldisc;
    cin>>totaldisc;
    towerofdisc(totaldisc,'A','C','B');
    
    return 0;
}
void towerofdisc(int totaldisc,char A,char B,char C){
    if(totaldisc>0){
        towerofdisc(totaldisc-1,A,C,B);
        cout<<"Moving ring "<< totaldisc<< " from "<<A<<" to "<<C<<endl;
        towerofdisc(totaldisc-1,B,A,C);
    }
}

