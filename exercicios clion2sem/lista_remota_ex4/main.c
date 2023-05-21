#include <stdio.h>

int main() {
    int n1=0,n2=0;
    for(int cont=1;cont<=5;++cont){
        printf("entre com um valor inteiro:\n");
        scanf("%d", &n1);
        if (cont==1) {
            n2 = n1;
        }
        if (n1<n2){
            n2=n1;
        }
    }
    printf("o menor numero eh:%d\n",n2);
    return 0;
}
