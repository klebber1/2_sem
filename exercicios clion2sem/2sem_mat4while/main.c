#include <stdio.h>

int main() {
    int soma =0;
    while(soma < 100){
        int num;
        printf("digite um numero: \n");
        scanf("%d",&num);
        soma+=num;
    }
    printf("valor da soma: %d \n",soma);
    return 0;
}
