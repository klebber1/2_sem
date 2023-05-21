#include <stdio.h>

int main() {
    char nome[41];
    int valor;
    printf("digite um valor:\n");
    scanf("%d",&valor);
    fflush(stdin);
    printf("digite o nome\n");
    gets(nome);
    printf("nome: %s \n",nome);
    return 0;
}