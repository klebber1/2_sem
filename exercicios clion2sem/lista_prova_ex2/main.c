#include <stdio.h>

int main() {
    int vetora[10]={0},vetorb[10]={0},cont=0,teste=0;
    printf("entre com 10 valores\n");
    for (int i = 1; i <=10; ++i) {
        printf("digite o valor %d:",i);
        scanf("%d",&vetora[cont]);
        cont++;
    }
    for (int i = 0; i < 10; ++i) {
        teste=i%2;
        if (teste==0){
            vetorb[i]=vetora[i]*5;
        }else{
            vetorb[i]=vetora[i]+5;
        }
    }
    /*
        vetorb[0]=vetora[0]*5;
        vetorb[2]=vetora[2]*5;
        vetorb[4]=vetora[4]*5;
        vetorb[6]=vetora[6]*5;
        vetorb[8]=vetora[8]*5;
        vetorb[1]=vetora[1]+5;
        vetorb[3]=vetora[3]+5;
        vetorb[5]=vetora[5]+5;
        vetorb[7]=vetora[7]+5;
        vetorb[9]=vetora[9]+5;
    */
    printf("lista do conteudo dos dois vetores com o indice ao contrario:\n");
    cont=9;
    for (int i = 9; i >= 0; --i) {
        printf("vetora[%d] = %d - vetorb[%d] = %d\n",i,vetora[cont],i,vetorb[cont]);
        cont--;
    }
    return 0;
}
