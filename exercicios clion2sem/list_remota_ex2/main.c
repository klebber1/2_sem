#include <stdio.h>

int main() {
    int fn1=0,fn2=0,fn3=1,cont=1;
    while (cont<10) {
        fn1 = fn2+fn3;
        fn2=fn3;
        fn3=fn1;
        printf("%d\n", fn1);
        if(cont==1){
            printf("1\n");
        }
       cont++;
    }
    return 0;
}
