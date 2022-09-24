#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int k,sum=0;
    for(int i=0;i<=5;i++){
       k=n%10;
     sum=sum+k;
     n=n/10;
    }
    printf("%d",sum);
    return 0;
}
