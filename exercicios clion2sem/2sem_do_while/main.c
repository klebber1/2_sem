#include <stdio.h>

int main() {
    int n,soma=0;
    do{
        do{
            printf("digite um numero [1,,19]:\n");
            scanf("%d",&n);
        }while(n<1||n>19);
        soma+=n;
    } while (soma<100);
    printf("valor final da soma: %d \n",soma);
    return 0;
}
