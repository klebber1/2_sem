#include <stdio.h>

int main() {
    int n1=0,n2=0,n3=1;
            if(n1<=0){
                printf("entre com um numero maior que zero:\n");
                scanf("%d",&n1);
            }
    do {
        n2=n1*(n1-1);
        n3=n2*n3;
        n1=n1-2;
    }while (n1>1);{
        printf("o fatorial eh:%d",n3);
    }
    return 0;
}
