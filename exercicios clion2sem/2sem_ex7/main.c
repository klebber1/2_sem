#include <stdio.h>

int main() {
    int num;
    int primo = 1;
    printf("digite um numero:\n");
    scanf("%d",&num);
    for (int i = 2; i <=num/2 ; ++i) {
        if (num % i == 0){
            primo = 0;
            break;
        }
    }
    if (primo){
        printf("o numero %d eh primo\n",num);
    } else{
        printf("o numero %d nao eh primo\n",num);
    }
    return 0;
}
