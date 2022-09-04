#include<stdio.h>
int main()
{
    int a,b,c,d,e=0;
 
    scanf("%d%d",&a,&b);
 
    while(a<=b)
    {
    a=3*a;
    b=2*b;
    e++;
    }
    printf("%d\n",e);
 
}