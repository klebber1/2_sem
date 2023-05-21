#include <stdio.h>
#define T 1

    int main() {
        int n=20;

        do {
            scanf("%d",&n);
            if (n>=0&&n<=15) {
                int m[n][n],a=1;
                for (int i = 0; i < n; ++i) {
                    for (int j = 0; j < n; ++j) {
                            m[i][j]=a;
                            if (j != 2) {
                                printf("%d \n",m[i][j]);
                            }
                            if (j == 2) {
                                printf("%d\n",m[i][j]);
                            }

                        a=m[i][j]*2;
                    }
                    a=m[i][T];
                }
            }
        } while (n!=0);
        return 0;
}


