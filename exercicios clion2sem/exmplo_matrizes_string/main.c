#include <stdio.h>

int main() {
    int vetor_a[10]={0};
    int vetor_b[10]={0};
    for (int i = 0; i < 10; ++i) {
        printf("digite um valor: \n");
        scanf("%d",&vetor_a[i]);
    }
    for (int i = 0; i < 10; ++i) {
        vetor_b[i]=i%2==0 ? vetor_a[i] * 5 : vetor_a[i] + 5;
    }
    for (int i = 0; i < 10; ++i) {
        printf("[%3d]",vetor_a[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; ++i) {
        printf("[%3d]",vetor_b[i]);
    }
    return 0;
}
