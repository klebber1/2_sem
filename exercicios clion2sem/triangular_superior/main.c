#include <stdio.h>
int main() {
    int matriz[7][7] = {0};
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j <= i; ++j) {
            matriz[i][j] = 1;
        }
    }
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 7; ++j) {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}