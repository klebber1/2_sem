#include <stdio.h>
int main() {
  int senha_usa=0,senha=2002;
  do {
      scanf("%d",&senha_usa);
      fflush(stdin);
      if (senha_usa==senha){
          printf("Acesso Permitido\n");
          return 0;
      }
      if(senha_usa!=senha){
          printf("Senha Invalida\n");
      }
  } while (senha_usa!=senha);

    return 0;
}