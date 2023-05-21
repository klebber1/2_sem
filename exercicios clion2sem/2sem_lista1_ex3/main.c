#include <stdio.h>

int main() {
    int numero=0,teste=0,contador1=0,contador2=0;
    printf("Digite um numero\n");
    scanf("%d",&numero);
    teste=numero%2;
    while (teste==0){
        printf("digite um numero impar\n");
        scanf("%d",&numero);
        teste=numero%2;
    }
    return 0;
}