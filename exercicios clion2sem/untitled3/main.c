#include <stdio.h>
#define T 1

int main() {
  int n,cont,apoio,apoio2;

    do {
        scanf("%d",&n);
        if (n>=0&&n<=15) {
            int matriz[n][n];
            matriz[0][0]=1;
            cont=0;
            for (int i = 0; i < n; ++i) {

                for (int j = 0; j < n; ++j) {

                    if (cont==0){
                        printf("%d ", matriz[i][j]);
                    }
                    if (cont!=0) {
                        matriz[i][j]=apoio;
                        if (j != 2) {
                            printf("%d ", matriz[i][j]);
                        }
                        if (j == 2) {
                            printf("%d", matriz[i][j]);
                        }
                    }
                    apoio=matriz[i][j]*2;
                }
                apoio=matriz[i][T];
                cont++;
            }
        }
    } while (n!=0);
    return 0;
}
