#include <stdio.h>

int main() {
    double notas[5][5];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("entre com a nota %d: \n",j+1);
            scanf("%lf",&notas[i][j]);
        }
        /* MA = (N1 + N2*2 + N3*3 + ME)/7*/
        notas[i][0] = notas[i][0] + notas[i][1] * 2 + notas[i][2] * 3 + notas[i][3] / 7;
    }
    printf("media de aproveitamento de cada aluno\n");
    for (int i = 0; i < 5; ++i) {
        printf("media de aproveitamento do aluno %d ===> %.2lf\n",i+1,notas[i][4]);
    }
    return 0;
}
