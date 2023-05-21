#include <stdio.h>
void up(int n);
int main() {
    int x=0,r=0;
    printf("digite um numero:\n");
    scanf("%d",&x);
    up(x);

    return 0;
}
void up(int n){
    if(n<=0)return;
    up(n-1);
    printf("%d\n",n);
}