#include <stdio.h>
int max_of_four(int a, int b, int c, int d){
    int greater=a;
    if(greater<b){
        greater=b;
    }
  if(greater<c){
        greater=c;     
    }
    if (greater<d) 
    {
        greater=d;
    }
    return greater;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
