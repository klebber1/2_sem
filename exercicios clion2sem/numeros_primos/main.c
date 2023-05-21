#include <stdio.h>

int main() {
    int primo[100]={0};
    int x=2;
    int cont=0;
    do {
        int eh_primo=1;
        for(int i=2;i<=x/2;i++){
            if (x%i==0){
                eh_primo=0;
                break;
            }
        }
        if (eh_primo){
            primo[cont]=x;
            cont++;
        }
        x++;
} while (cont<100);
    for (int i = 0; i < 100; ++i) {
        printf("[%2d]",primo[i]);
    }
    printf("\n acima numeros primos (100 primeiros)");
    return 0;
}
