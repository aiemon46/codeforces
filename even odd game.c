#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a%2==0){
        printf("Mahmoud");
    }
    else if (a%2==1){
        printf("Ehab");
    }
    else if(a==0){
        printf("Mahmoud");
    }
    return 0;
}