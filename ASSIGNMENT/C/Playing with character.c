#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch,c[100],v[100];

scanf("%c ",&ch);
scanf("%s",c);
scanf(" %[^\n]%*c",&v);
printf("%c\n",ch);
printf("%s\n",c);
printf("%s",v);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
