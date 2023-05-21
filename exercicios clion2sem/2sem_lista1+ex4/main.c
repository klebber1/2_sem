#include <stdio.h>

int main() {
    int n1=0, n2=0, n3=0, n4=0, n5=0, n6=0, n7=0, n8=0;
    while (n1<=0) {
            printf("Entre com o primeiro numero do primeiro par:\n");
            scanf("%d", &n1);
            while (n1<=0) {
                printf("digite um numero positivo:\n");
                scanf("%d",&n1);
            }
        }
    while (n2<=0){
            printf("entre com o segundo numero do primeiro par:\n");
            scanf("%d",&n2);
            while (n2<=0) {
                printf("digite um numero positivo:\n");
                scanf("%d",&n2);
            }
        }
    while (n3<=0) {
        printf("Entre com o primeiro numero do segundo par:\n");
        scanf("%d", &n3);
        while (n3<=0) {
            printf("digite um numero positivo:\n");
            scanf("%d",&n3);
        }
    }
    while (n4<=0) {
        printf("Entre com o segundo  numero do segundo par:\n");
        scanf("%d", &n4);
        while (n4<=0) {
            printf("digite um numero positivo:\n");
            scanf("%d",&n4);
        }
    }
    while (n5<=0) {
        printf("Entre com o primeiro numero do terceiro par:\n");
        scanf("%d", &n5);
        while (n5<=0) {
            printf("digite um numero positivo:\n");
            scanf("%d",&n5);
        }
    }
    while (n6<=0) {
        printf("Entre com o segundo  numero do terceiro par:\n");
        scanf("%d", &n6);
        while (n6<=0) {
            printf("digite um numero positivo:\n");
            scanf("%d",&n6);
        }
    }
    while (n7<=0) {
        printf("Entre com o primeiro numero do quarto par:\n");
        scanf("%d", &n7);
        while (n7<=0) {
            printf("digite um numero positivo:\n");
            scanf("%d",&n7);
        }
    }
    while (n8<=0) {
        printf("Entre com o segundo  numero do quarto par:\n");
        scanf("%d", &n8);
        while (n8<=0) {
            printf("digite um numero positivo:\n");
            scanf("%d",&n8);
        }
    }
    if (n1>n2) {
        printf("O maior numero do primeiro par e:%d\n", n1);
    }
    if (n2>n1) {
            printf("O maior numero do primeiro par e:%d\n", n2);
    }
    if (n1==n2) {
                printf("Os numeros sao iguais no primeiro par\n");
    }
    if (n3>n4) {
        printf("O maior numero do segundo par e:%d\n", n3);
    }
    if (n4>n3) {
            printf("O maior numero do segundopar e:%d\n", n4);
    }
    if (n3==n4){
                printf("Os numeros sao iguais no segundo par\n");
    }
    if (n5>n6) {
        printf("O maior numero do terceiro par e:%d\n", n5);
    }
    if (n6>n5) {
            printf("O maior numero do terceiro par e:%d\n", n6);
    }
    if (n5==n6){
                printf("Os numeros sao iguais no terceiro par\n");
    }
    if (n7>n8) {
        printf("O maior numero do quarto par e:%d\n", n7);
    }
    if (n8>n7) {
            printf("O maior numero do quarto par e:%d\n", n8);
    }
    if (n7==n8){
                printf("Os numeros sao iguais no quarto par\n");
    }
    return 0;
}
