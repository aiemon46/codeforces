#include<stdio.h>
int main(){
    int a,b,c,d,k;
    scanf("%d%d",&a,&b);
    for(k=1;k<=b;k++){
        if(a%10==0){
             a=a/10;
        }
        else{
             a=a-1;
        }
    }
    printf("%d",a);
    return 0;
}