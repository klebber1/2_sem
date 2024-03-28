#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX_CONTAS 3
struct Conta{
    int numero;
    char cliente[51];
    int especial;
    float saldo;
};
typedef struct Conta Conta;
void inserir(Conta* contas, int* totalContas);
void alterar(Conta* contas, int totalContas);
void procurar(Conta* contas, int totalContas);
void listar(Conta* contas, int totalContas);
void depositar(Conta* contas, int totalContas);
void sacar(Conta* contas, int totalContas);
void imprimir(Conta* contas, int totalContas);
void saldoGeral(Conta* contas, int totalContas);
int main() {
    setlocale(LC_ALL,"portuguese");
    if (setlocale(LC_ALL, "portuguese") == NULL) {
        printf("Falha ao definir a localizacao.\n");
    }
    Conta contas[MAX_CONTAS];
    int totalContas = 0;
    char opcao;
    do {
    printf("\n----- Menu -----\n");
    printf("1. Inserir nova conta\n");
    printf("2. Alterar dados de uma conta\n");
    printf("3. Procurar uma conta\n");
    printf("4. Listar todas as contas\n");
    printf("5. Realizar dep\xf3sito\n");
    printf("6. Realizar saque\n");
    printf("7. Imprimir dados de uma conta\n");
    printf("8. Mostrar saldo geral\n");
    printf("0. Sair\n");
    printf("Op\xe7\xe3o: ");
    fflush(stdin);
    scanf("%c", &opcao);
    while (opcao < '\x30' || opcao > '\x38' ){
        printf("Op\xe7\xe3o inv\xe1lida! Escolha uma op\xe7\xe3o entre 0 e 8.\n");
        fflush(stdin);
        scanf("%c", &opcao);
    }
    switch (opcao) {
        case '\x31':
            inserir(contas, &totalContas);
            break;
        case '\x32':
            alterar(contas, totalContas);
            break;
        case '\x33':
            procurar(contas, totalContas);
            break;
        case '\x34':
            listar(contas, totalContas);
            break;
        case '\x35':
            depositar(contas, totalContas);
            break;
        case '\x36':
            sacar(contas, totalContas);
            break;
        case '\x37':
            imprimir(contas, totalContas);
            break;
        case '\x38':
            saldoGeral(contas, totalContas);
            break;
        case '\x30':
            printf("Finalizando programa...\n");
            system("pause");
            break;
        default:
            break;
    }
    } while (opcao != '\x30');
    return 0;
}