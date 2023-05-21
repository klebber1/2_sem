#include <stdio.h>

int main() {
    double ma, n1, n2, n3, me;
    for (int i = 1; i <=5 ; ++i) {
        printf("digitar 3 notas separadas por espaco:\n");
        scanf("%lf%lf%lf",&n1,&n2,&n3);
        printf("digite a media de aproveitamento:\n");
        scanf("%lf",&me);
        ma = (n1+n2*2+n3*3 +me)/7;
        printf("a media deste aluno e: %2.2lf\n",ma);
    }
    return 0;
}
