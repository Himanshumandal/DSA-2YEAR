#include <cstdio>
#include <iostream>


using namespace std;


int main(){
    int hours, min, sec;
    char a1,a2 ;
    scanf("%d:%d:%d%c%c", &hours, &min, &sec, &a1, &a2);
    if(hours==12){
        hours=0;
    }
    
    if (a1 == 'P'){
        hours = hours + 12;
    }
    printf("%02d:%02d:%02d\n", hours,min,sec);

    
}
