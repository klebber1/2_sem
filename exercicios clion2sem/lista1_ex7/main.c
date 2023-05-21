#include <stdio.h>

int main() {
    int numero;
    printf("digite o numero a ser testado:\n");
    scanf("%d",&numero);
    int primo=1;
    for (int i = 2; i < numero; ++i) {
        if (numero % i == 0){
            primo = 0;
            break;
        }
    }
    if (primo){
        printf("o numero eh primo: \n");
    } else{
        printf("o numero nao e primo: \n");
    }
    return 0;
}
