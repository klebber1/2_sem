
#include <stdio.h>
#define T 1

    int main() {
        int n=0,apoio=1;

        do {
            scanf("%d",&n);
            if (n>=0&&n<=15) {
                int matriz[n][n];
                for (int i = 0; i < n; ++i) {

                    for (int j = 0; j < n; ++j) {

                            matriz[i][j]=apoio;
                            if (j != 2) {
                                printf("%d ",matriz[i][j]);
                            }
                            if (j == 2) {
                                printf("%d",matriz[i][j]);
                            }

                        apoio=matriz[i][j]*2;
                    }
                    apoio=matriz[i][T];
                }
            }
        } while (n!=0);
        return 0;
}
