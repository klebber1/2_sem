#include <stdio.h>

int main() {
      int n=20;
    scanf("%d",&n);
    while (n!=0){
        int m[n][n];
        if (n>=0&&n<=15) {
            int a=1;
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    m[i][j]=a;
                    if (j != (n-1)) {
                        printf(" %d",m[i][j]);
                    }
                    if (j == (n-1) ) {
                        printf(" %d\n",m[i][j]);
                    }
                    a=m[i][j]*2;
                }
                a=m[i][1];
            }
            printf("\n");
            scanf("%d",&n);
        }
    }
    return 0;
}
