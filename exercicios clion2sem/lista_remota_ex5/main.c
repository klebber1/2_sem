#include <stdio.h>

int main() {
    int n1=0,n2=0;
    printf("entre com um valor positivo para ver a tabuada do valor:\n");
    scanf("%d",&n1);
    if (n1<0){
        printf("entre com um numero positivo:\n");
        scanf("%d",&n1);
    }
    for (int cont = 0; cont <= 10; ++cont) {
        n2=n1*cont;
        printf("%d*%d=%d\n",n1,cont,n2);
    }
    return 0;
}
