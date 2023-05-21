#include <stdio.h>

int main() {
    for(int i = 1; i<=10; i++){
        if (i==3||i==7) continue;
        printf("%d \n",i);
    }
    printf("acabou\n");
    return 0;
}
