#include <stdio.h>
int somaDiv3(int n);
int main() {
    int valor=0;
    printf("digite um teto:\n");
    scanf("%d",valor);
    printf("Hello, World!\n");
    return 0;
}
int somaDiv3(int n){
    if(n==1)return 0;
    if(n%3==0){
        return n+ somaDiv3(n-1);
    } else{
        return somaDiv3(n-1);
    }
}