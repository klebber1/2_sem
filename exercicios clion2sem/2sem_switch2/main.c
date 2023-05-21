#include <stdio.h>

int main() {
    char letra;
    printf("digite uma unica letra; \n");
    fflush(stdin);
    letra = getchar();
    switch (letra) {
        case'a':
        case'A':
        case'e':
        case'E':
        case'i':
        case'I':
        case'o':
        case'O':
        case'u':
        case'U':
            printf("trata-se de vogal \n");
            break;
        default:
            printf("nao e vogal \n");
    }
    return 0;
}
