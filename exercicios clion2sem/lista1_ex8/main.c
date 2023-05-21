#include <stdio.h>

int main() {
    int numero;
    int soma=0;
    int cont = 0;
    do {
        printf("digite um valor ou 0 para sair:\n");
        scanf("%d",&numero);
        soma+=numero;
        if (numero!=0){
            cont++;
        }
}while(cont<10&&numero!=0);
    double media = 0.0;
    if (cont!=0){
        media=(double)soma/cont;
    }
    printf("a media eh: %.2lf \n",media);
    return 0;
}
