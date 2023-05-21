#include <stdio.h>

int main() {
    int cont=0;
    float salario[12]={0},media=0;
    printf("\n");
    for (int i = 1; i <= 12; ++i) {
        printf("Digite o salario %d:",i);
        scanf("%f",&salario[cont]);
        cont++;
    }
    cont=0;
    for (int i = 1; i <= 12; ++i) {
        printf("salario do mes %d eh %.2f\n",i,salario[cont]);
        cont++;
    }
        media=(salario[0]+salario[1]+salario[2]+salario[3]+salario[4]+salario[5]+salario[6]+salario[7]+salario[8]+salario[9]+salario[10]+salario[11])/12;
        printf("A media dos salarios e %.2f",media);

    return 0;
}
