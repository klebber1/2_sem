#include <stdio.h>

int main() {
    int n1=0,n2=0;
    if (n1<=0) {
        printf("Entre com um numero maior que 1:\n");
        scanf("%d", &n1);
    }
    for (int cont = 1; cont <= n1; ++cont) {
        printf("%d,",cont);
        n2+=cont;
    }
    printf("\n");
    printf("A soma eh: %d",n2);
    return 0;
}
