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