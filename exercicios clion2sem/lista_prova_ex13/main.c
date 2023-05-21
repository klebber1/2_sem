#include <stdio.h>

int main() {
    int vetor[7][7];
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 7; ++j) {
            if (i==j){
                vetor[i][j]=1;
                printf("[%d] ",vetor[i][j]);
            }else{
                vetor[i][j]=0;
                printf("[%d] ",vetor[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
