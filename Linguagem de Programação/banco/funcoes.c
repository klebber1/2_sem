#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX_CONTAS 3
void inserir(Conta* contas, int* totalContas) {
    setlocale(LC_ALL,"portuguese");
    if (setlocale(LC_ALL, "portuguese") == NULL) {
        printf("Falha ao definir a localizacao.\n");
    }
    if (*totalContas >= MAX_CONTAS) {
        printf("Limite m\xe1ximo de contas atingido.\n");
        system("pause");
        return;
    }
    Conta novaConta;
    printf("\n--- Inserir nova conta ---\n");
    printf("N\xfamero da conta: ");
    fflush(stdin);
    scanf("%d", &novaConta.numero);
    while (novaConta.numero<=*totalContas){
        printf("Conta existente. Contas dispon\xedveis acima de %d:\n",*totalContas);
        printf("entre com uma conta v\xe1lida: ");
        fflush(stdin);
        scanf("%d", &novaConta.numero);
    }
    printf("Nome do cliente: ");
    fflush(stdin);
    scanf("%50[^\n]s", novaConta.cliente);
    printf("Conta especial (1 - Sim, 0 - N\xe3o): ");
    fflush(stdin);
    scanf("%d", &novaConta.especial);
    printf("Saldo: ");
    fflush(stdin);
    scanf("%f", &novaConta.saldo);

    contas[*totalContas] = novaConta;
    (*totalContas)++;

    printf("Conta inserida com sucesso!\n");
    system("pause");
}
void alterar(Conta* contas, int totalContas){
    setlocale(LC_ALL,"portuguese");
    if (setlocale(LC_ALL, "portuguese") == NULL) {
        printf("Falha ao definir a localizacao.\n");
    }
    int numeroConta;
    printf("\n--- Alterar dados de uma conta ---\n");
    printf("N\xfamero da conta: ");
    fflush(stdin);
    scanf("%d", &numeroConta);
    for (int i = 0; i < totalContas; i++) {
        if (contas[i].numero == numeroConta) {
            printf("Novo nome do cliente: ");
            fflush(stdin);
            scanf("%50[^\n]s",contas[i].cliente);
            printf("Dados da conta alterados com sucesso!\n");
            system("pause");
            return;
        }
    }
    printf("Conta n\xe3o encontrada!\n");
    system("pause");
}
void procurar(Conta* contas, int totalContas){
    setlocale(LC_ALL,"portuguese");
    if (setlocale(LC_ALL, "portuguese") == NULL) {
        printf("Falha ao definir a localizacao.\n");
    }
    int numeroConta;
    printf("\n--- Procurar uma conta ---\n");
    printf("N\xfamero da conta: ");
    fflush(stdin);
    scanf("%d", &numeroConta);
    for (int i = 0; i < totalContas; i++) {
        if (contas[i].numero == numeroConta) {
            printf("\n--- Informa\xe7\xf5\x65s da conta ---\n");
            printf("N\xfamero da conta: %d\n", contas[i].numero);
            printf("Nome do cliente: %s\n", contas[i].cliente);
            printf("Conta especial: %s\n", contas[i].especial ? "Sim" : "N\xe3o");
            printf("Saldo: %.2f\n", contas[i].saldo);
            system("pause");
            return;
        }
    }
    printf("Conta n\xe3o encontrada!\n");
    system("pause");
}
void listar(Conta* contas, int totalContas){
    setlocale(LC_ALL,"portuguese");
    if (setlocale(LC_ALL, "portuguese") == NULL) {
        printf("Falha ao definir a localizacao.\n");
    }
    if (totalContas == 0) {
        printf("Nenhuma conta cadastrada.\n");
        system("pause");
        return;
    }
    printf("\n--- Lista de Contas ---\n");
    for (int i = 0; i < totalContas; i++) {
        printf("N\xfamero da conta: %d\n", contas[i].numero);
        printf("Nome do cliente: %s\n", contas[i].cliente);
        printf("Conta especial: %s\n", contas[i].especial ? "Sim" : "N\xe3o");
        printf("Saldo: %.2f\n\n", contas[i].saldo);
    }
    system("pause");
}
void depositar(Conta* contas, int totalContas){
    setlocale(LC_ALL,"portuguese");
    if (setlocale(LC_ALL, "portuguese") == NULL) {
        printf("Falha ao definir a localizacao.\n");
    }
    int numeroConta;
    float valorDeposito;
    printf("\n--- Realizar dep\xf3sito ---\n");
    printf("N\xfamero da conta: ");
    fflush(stdin);
    scanf("%d", &numeroConta);
    for (int i = 0; i < totalContas; i++) {
        if (contas[i].numero == numeroConta) {
            printf("Valor do dep\xf3sito: ");
            fflush(stdin);
            scanf("%f", &valorDeposito);

            while (valorDeposito <= 0 ) {
                printf("Valor inv\xe1lido. O dep\xf3sito deve ser um valor positivo.\n");
                printf("Digite um valor positivo: ");
                fflush(stdin);
                scanf("%f", &valorDeposito);
            }
            contas[i].saldo = contas[i].saldo + valorDeposito;
            printf("Dep\xf3sito realizado com sucesso!\n");
            printf("Novo saldo: %.2f\n", contas[i].saldo);
            system("pause");
            return;
        }
    }
    printf("Conta n\xe3o encontrada!\n");
    system("pause");
}
void sacar(Conta* contas, int totalContas){
    setlocale(LC_ALL,"portuguese");
    if (setlocale(LC_ALL, "portuguese") == NULL) {
        printf("Falha ao definir a localizacao.\n");
    }
    int numeroConta;
    float valorSaque;
    printf("\n--- Realizar saque ---\n");
    printf("N\xfamero da conta: ");
    fflush(stdin);
    scanf("%d", &numeroConta);
    for (int i = 0; i < totalContas; i++) {
        if (contas[i].numero == numeroConta) {
            printf("Valor do saque: ");
            fflush(stdin);
            scanf("%f", &valorSaque);

            while (valorSaque <= 0) {
                printf("Valor inv\xe1lido. O saque deve ser um valor positivo.\n");
                printf("Digite um valor positivo: ");
                fflush(stdin);
                scanf("%f", &valorSaque);
                system("pause");
            }
            if (valorSaque > contas[i].saldo) {
                printf("Saldo insuficiente.\n");
                printf("O seu saldo \xe9: %.2f\n",contas[i].saldo);
                printf("Fale com seu gerente banc\xe1rio.\n");
                system("pause");
                return;
            }
            contas[i].saldo = contas[i].saldo - valorSaque;
            printf("Saque realizado com sucesso!\n");
            printf("Novo saldo: %.2f\n", contas[i].saldo);
            system("pause");
            return;
        }
    }
    printf("Conta n\xe3o encontrada!\n");
    system("pause");
}
void imprimir(Conta* contas, int totalContas){
    setlocale(LC_ALL,"portuguese");
    if (setlocale(LC_ALL, "portuguese") == NULL) {
        printf("Falha ao definir a localizacao.\n");
    }
    int numeroConta;
    printf("\n--- Imprimir dados de uma conta ---\n");
    printf("N\xfamero da conta: ");
    fflush(stdin);
    scanf("%d", &numeroConta);
    for (int i = 0; i < totalContas; i++) {
        if (contas[i].numero == numeroConta) {
            printf("\n--- Informa\xe7\xf5\x65s da conta ---\n");
            printf("N\xfamero da conta: %d\n", contas[i].numero);
            printf("Nome do cliente: %s\n", contas[i].cliente);
            printf("Conta especial: %s\n", contas[i].especial ? "Sim" : "N\xe3o");
            printf("Saldo: %.2f\n", contas[i].saldo);
            system("pause");
            return;
        }
    }
    printf("Conta n\xe3o encontrada!\n");
    system("pause");
}
void saldoGeral(Conta* contas, int totalContas){
    setlocale(LC_ALL,"portuguese");
    if (setlocale(LC_ALL, "portuguese") == NULL) {
        printf("Falha ao definir a localizacao.\n");
    }
    float saldoTotal = 0;
    for (int i = 0; i < totalContas; i++) {
        saldoTotal = saldoTotal + contas[i].saldo;
    }
    printf("\n--- Saldo Geral ---\n");
    printf("O saldo total de todas as contas banc\xe1rias \xe9: %.2f\n", saldoTotal);
    system("pause");
}