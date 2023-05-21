#include <stdio.h>

int main() {
    int opcao;
    printf("menu do biro lanchoneete \n");
    printf("1. coxinha \n");
    printf("2. esfiha \n");
    printf("3. pastel de carne \n");
    printf("4. pastel de queijo \n");
    printf("escolha sua opcao \n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("coxinha, R$ 8,00 \n");
            break;
        case 2:
            printf("esfiha, R$ 7,00 \n");
            break;
        case 3:
            printf("pastel de carne, R$ 8,00 \n");
            break;
        case 4:
            printf("pastel de queijo, R$ 8,00 \n");
            break;
        default:
            printf("escolha errada. verifique \n");
    }
    return 0;
}
