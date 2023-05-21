#include <stdio.h>
int fat(int n){
    if (n==1)return 1;
    return n* fat(n-1);
}
int main() {
    int x,r;
    printf("entre com um numero:\n");
    scanf("%d",&x);
    r=fat(x);
    printf("%d",r);
    return 0;
}
