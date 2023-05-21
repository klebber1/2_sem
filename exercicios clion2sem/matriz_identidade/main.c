#include <stdio.h>

int main() {
    int tamanho;
    printf("Qual o tamanho da matriz (linhas)\n");
    scanf("%d",&tamanho);
    int matriz[tamanho][tamanho];
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            matriz[i][j]=i==j?1:0;
            printf("[%2d] ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}