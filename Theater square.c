 #include<stdio.h>
int main()
{
 
    long long int n,m,a,b,c,d;
 
    scanf("%I64d%I64d%I64d",&n,&m,&a);
 
    if(n%a==0)
    {
        b=n/a;
    }
    else if(n%a!=0)
    {
        b=n/a+1;
    }
    if(m%a==0)
    {
        c=m/a;
    }
    else if(m%a!=0)
    {
        c=m/a+1;
    }
    d=b*c;
    printf("%I64d\n",d);
    return 0;
}