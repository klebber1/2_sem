#include <stdio.h>
int fibo(int n);
int main() {
    int teto;
    printf("qual sequencia de fibonati quer saber:\n");
    scanf("%d",&teto);
    printf("resultado: %d\n", fibo())
    return 0;
}
int fibo(int n){
    if (n==1||n==2) return 1 ;
    return fibo(n-1)+ fibo(n-2);
}