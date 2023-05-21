#include <stdio.h>
#include <stdlib.h>
int main() {
    int mn=10;
    do {
        mn=10;
        float valor1=0;
        float valor2=0;
        float resultado=0;
            printf("Escolha umas das opcoes a seguir:\n");
            printf("1-Soma\n");
            printf("2-Subtracao\n");
            printf("3-Divisao\n");
            printf("4-Multiplicacao\n");
            printf("0-Sair\n");
            if (mn > 4 || mn < 0) {
                printf("Escolha uma das opcoes acima:\n");
                scanf("%d", &mn);
            }
        switch (mn) {
            case 1:
                    printf("digite o primeiro valor:\n");
                    scanf("%f",&valor1);
                    printf("Digite o segundo valor:\n");
                    scanf("%f",&valor2);
                    resultado = valor1 + valor2;
                    printf("A soma dos valores eh: %.4f\n",resultado);
                    system("pause");
                break;
            case 2:
                printf("digite o primeiro valor:\n");
                scanf("%f",&valor1);
                printf("Digite o segundo valor:\n");
                scanf("%f",&valor2);
                resultado=valor1-valor2;
                printf("A subtracao dos valores eh: %.4f\n",resultado);
                system("pause");
                break;
            case 3:
                printf("digite o primeiro valor:\n");
                scanf("%f",&valor1);
                printf("Digite o segundo valor:\n");
                scanf("%f",&valor2);
                resultado=valor1/valor2;
                printf("A divisao dos valores eh: %.4f\n",resultado);
                system("pause");
                break;
            case 4:
                printf("digite o primeiro valor:\n");
                scanf("%f",&valor1);
                printf("Digite o segundo valor:\n");
                scanf("%f",&valor2);
                resultado=valor1*valor2;
                printf("A multiplicacao dos valores eh: %.4f\n",resultado);
                system("pause");
                break;
            case 0:
                break;
        }
    } while (mn!=0);
    return 0;
}
