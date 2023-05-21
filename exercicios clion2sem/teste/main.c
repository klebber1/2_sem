#include <stdio.h>
int verPositividade(int valor){
    if (valor>0){
        return 1;
    }
    if (valor<0){
        return -1;
    } else{
        return 0;
    }
}
int main() {
    int valor_in, valor_out;
    printf("Digite um numero\n");
    scanf("%d",&valor_in);
    fflush(stdin);
    valor_out= verPositividade(valor_in);
    printf("O valor eh: %d\n",valor_out);

    return 0;
}
