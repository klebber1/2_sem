exercicio 1:



#include <stdio.h>
int verPositividade(int valor){
    if (valor>0){
        return 1;
    }
    if (valor<0){
        return -1;
    } else{
        return 0;
    }
}
int main() {
    int valor_in, valor_out;
    printf("Digite um numero\n");
    scanf("%d",&valor_in);
    fflush(stdin);
    valor_out= verPositividade(valor_in);
    printf("O valor eh: %d\n",valor_out);
    
    return 0;
}



exercicio 2:



#include <stdio.h>
int somarIntervalo(int n1, int n2){
    int cont,resultado=0;
    cont=n1;
    for (int i = n1; i < n2; ++i) {
        cont++;
        resultado=resultado+cont;
        if (cont==(n2-1)){
            return resultado;
        }
    }
    return resultado;
}
int main() {
    int valor_1, valor_2,resposta;
    printf("Digite o numero 1\n");
    scanf("%d",&valor_1);
    fflush(stdin);
    printf("Digite o numero 2\n");
    scanf("%d",&valor_2);
    fflush(stdin);
    resposta= somarIntervalo(valor_1,valor_2);
    printf("O valor eh: %d\n",resposta);

    return 0;
}




exercicio 3:




#include <stdio.h>
int somarIntervalorDivisiveis(int a, int b, int c){
    int res=0,t;
    for (int i = b; i <= c; ++i) {
        t=i%a;
        if (t==0){
            res=res+i;
        }
    }
    return res;
}
int main() {
    int valor_1, valor_2,valor_3,resposta;
    printf("Digite o numero 1\n");
    scanf("%d",&valor_1);
    fflush(stdin);
    printf("Digite o numero 2\n");
    scanf("%d",&valor_2);
    fflush(stdin);
    printf("Digite o numero 3\n");
    scanf("%d",&valor_3);
    fflush(stdin);
    resposta= somarIntervalorDivisiveis(valor_1,valor_2,valor_3);
    printf("O valor eh: %d\n",resposta);

    return 0;



exercicio 4:




#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3, char s){
    float media;

    if (s=='A'){
        media=(nota1+nota2+nota3)/3;
        return media;
    }
    if (s=='B'){
        media=((nota1*2)+(nota2*4)+(nota3*5))/11;
        return media;
    }
}
int main() {
    float n1,n2,n3,resposta;
    char tipo;
    printf("Digite a nota 1\n");
    scanf("%f",&n1);
    fflush(stdin);
    printf("Digite a nota 2\n");
    scanf("%f",&n2);
    fflush(stdin);
    printf("Digite a nota 3\n");
    scanf("%f",&n3);
    fflush(stdin);
    printf("Digite o tipo de media desejada\n");
    scanf("%s",&tipo);

    resposta=calcularMedia(n1,n2,n3,tipo);
    printf("A media final eh: %.1f\n",resposta);

    return 0;




exercicio 5:





#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3,int peso1, int peso2, int peso3) {
    float media;
    media=((nota1*peso1)+(nota2*peso2)+(nota3*peso3))/(peso1+peso2+peso3);
    return media;
}
int main() {
    float n1,n2,n3,resposta;
    int p1,p2,p3;

    printf("Digite a nota 1\n");
    scanf("%f",&n1);
    fflush(stdin);
    printf("Digite a nota 2\n");
    scanf("%f",&n2);
    fflush(stdin);
    printf("Digite a nota 3\n");
    scanf("%f",&n3);
    fflush(stdin);
    printf("Digite o peso 1\n");
    scanf("%d",&p1);
    fflush(stdin);
    printf("Digite o peso 2\n");
    scanf("%d",&p2);
    fflush(stdin);
    printf("Digite o peso 3\n");
    scanf("%d",&p3);
    fflush(stdin);

    resposta=calcularMedia(n1,n2,n3,p1,p2,p3);
    printf("A media final eh: %.1f\n", resposta);

    return 0;
}






exercicio  6:






#include <stdio.h>

void ler(int n) {
    int maior,menor,cont=1,n1;
    printf("Digite o numero %d\n",cont);
    scanf("%d",&n1);
    menor=n1;
    maior=n1;
    for (int i = n-1; i >0 ; --i) {
        cont++;
        printf("digite o numero %d\n",cont);
        scanf("%d",&n1);
        fflush(stdin);
        if (n1>maior){
            maior=n1;
        }
        if (n1<menor){
            menor=n1;
        }
    }
    printf("maior %d\n",maior);
    printf("menor %d\n",menor);
}
int main() {
    int ne=0;
    printf("Digite quantos numeros vao entrar\n");
    scanf("%d",&ne);
    fflush(stdin);
    ler(ne);

    return 0;
}






exercicio 7:






#include <stdio.h>
#include <math.h>
int somar(int a, int b, int c){
    int resposta;
    resposta= pow(a,2)+ pow(b,2)+ pow(c,2);
    printf("a somatoria do quadrado de cada numero eh: %d\n",resposta);
}
int main() {
    int numero_1,numero_2,numero_3;
    printf("entre com o numero a:\n");
    scanf("%d",&numero_1);
    fflush(stdin);
    printf("entre com o numero b:\n");
    scanf("%d",&numero_2);
    fflush(stdin);
    printf("entre com o numero c:\n");
    scanf("%d",&numero_3);
    fflush(stdin);

    somar(numero_1,numero_3,numero_3);


    return 0;
}








exercicio 8:







MAIN.C:



#include <stdio.h>
#include <stdlib.h>
#include "data.h"
int main() {
    int dd,mm,aaaa,resposta;
    printf("Digite uma data, se for valida o valor de retorno eh 1, senao 0\n");
    printf("Digite o dia, mes e ano no formato dd/mm/aaaa\n\n");
    printf("digite o dia:\n");
    scanf("%d",&dd);
    fflush(stdin);
    printf("digite o mes:\n");
    scanf("%d",&mm);
    fflush(stdin);
    printf("digite o ano:\n");
    scanf("%d",&aaaa);
    fflush(stdin);

    resposta = validarData(dd,mm,aaaa);

    printf("O valor de retorno do ano digitado eh: %d\n",resposta);


    return 0;
}





DATA.H:


int validarData(int dia, int mes, int ano);




DATA.C:

#include <stdio.h>
#include <stdlib.h>
#include "data.h"
int validarData(int dia,int mes,int ano){
    int teste1,teste2,teste3;
    teste1=ano%400;
    teste2=ano%4;
    teste3=ano%100;
    if (ano>0){

        if (mes>0&&mes<=12){
            if (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
                if (dia>0&&dia<=31){
                    return 1;
                }
            }
            if (mes==4||mes==6||mes==8||mes==9||mes==11){
                if (dia>0&&dia<=30){
                    return 1;
                }
            }
            if (mes==2){
                if (dia>0&&dia<=28){
                    return 1;
                }
                if (dia==29){
                    if (teste2==0){
                        if (ano<=100){
                            return 1;
                        }
                        if (ano>100&&ano<=400){
                            if (teste3==0||teste2==0){
                                return 1;
                            }
                        }
                        if (ano>400){
                                if (teste1!=0){
                                    return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}