#include <stdio.h>
/*
 * Durante uma corrida de automóveis com N voltas (onde
 * 0 < N < 15) de duração foram anotados, para um piloto,
 * na ordem, os tempos registrados em cada volta. Fazer
 * um programa em C para ler os tempos das N voltas.
 * Calcular e imprimir:
 * a) melhor tempo;
 * b) a volta em que o melhor tempo ocorreu;
 * c) tempo médio das N voltas
 */

int main() {
    int melhorvolta=0, nvoltas=0, cont=0;
    double tempo, tempomedio=0, somatempo=0, menortempo=0;
    do {
        printf("Entre com o numero de voltas: \n");
        scanf("%d",&nvoltas);
    } while (nvoltas<=0 || nvoltas>=15);
    for (int cont = 1; cont <= nvoltas ; ++cont) {
        printf("Digite o tempo da volta \n");
        scanf("%lf", &tempo);
        if (cont==1){
            melhorvolta=1;
            menortempo=+tempo;
        }
        if (tempo < menortempo){
            menortempo = tempo;
            melhorvolta = cont;
        }
        somatempo =+ tempo;
    }
    tempomedio = somatempo / nvoltas;
    printf("Melhor volta em tempo: %lf \n", menortempo);
    printf("Melhor volta numerica: %d \n", melhorvolta);
    printf("Tempo medio das voltas: %lf \n", tempomedio);
    return 0;
}
