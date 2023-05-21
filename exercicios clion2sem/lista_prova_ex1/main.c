#include <stdio.h>

int main() {
    int vetor_a[5]={0},cont=1,somai=0,somap=0,somat=0,conti=0,contp=0;
    float teste=0;
    for (int i = 0; i < 5; ++i) {
        printf("digite o valor %d:",cont);
        scanf("%d",&vetor_a[i]);
        cont++;
    }
    for (int i = 0; i < 5; ++i) {
        teste=vetor_a[i]%2;
        if (teste==0){
            somap=somap+vetor_a[i];
            contp++;
        } else{
            somai=somai+vetor_a[i];
            conti++;
        }
    }
    somat=somai+somap;
    conti=conti*20;
    contp=contp*20;
    printf("a soma de todos os pares eh --> %d\n",somap);
    printf("a soma de todos os impares eh --> %d\n",somai);
    printf("a soma total eh --> %d\n",somat);
    printf("%d por cento numeros pares\n",contp);
    printf("%d por cento numeros impares\n",conti);
    return 0;
}
