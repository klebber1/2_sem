#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 7
int main() {
    int matriz[T][T]={0};

    for (int i = 0; i < T; ++i) {
        for (int j = 0; j < T; ++j) {
            if (i<=j){
                matriz[i][j]=(rand()%9)+1;
            }
            printf("[%2d] ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}