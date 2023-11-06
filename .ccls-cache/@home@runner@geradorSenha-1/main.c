#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void gerarSenha(int comprimento, int incluirMaiusculas, int incluirMinusculas, int incluirNumeros, int incluirEspeciais) {
   const char caracteresMaiusculos[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   const char caracteresMinusculos[] = "abcdefghijklmnopqrstuvwxyz";
   const char caracteresNumeros[] = "0123456789";
   const char caracteresEspeciais[] = "!@#$%^&*()";

   char caracteresPermitidos[100] = "";

   if (incluirMaiusculas) {
      strcat(caracteresPermitidos, caracteresMaiusculos);
   }
   if (incluirMinusculas) {
      strcat(caracteresPermitidos, caracteresMinusculos);
   }
   if (incluirNumeros) {
      strcat(caracteresPermitidos, caracteresNumeros);
   }
   if (incluirEspeciais) {
      strcat(caracteresPermitidos, caracteresEspeciais);
   }

   srand(time(0));

   for (int i = 0; i < comprimento; i++) {
      int index = rand() % strlen(caracteresPermitidos);
      printf("%c", caracteresPermitidos[index]);
   }
   printf("\n");
}

int main() {
   int comprimento, incluirMaiusculas, incluirMinusculas, incluirNumeros, incluirEspeciais;

   printf("Bem-vindo ao Gerador de Senhas!\n");

   printf("Digite o comprimento da senha: ");
   scanf("%d", &comprimento);

   printf("Incluir letras maiúsculas? (1 - Sim / 0 - Não): ");
   scanf("%d", &incluirMaiusculas);

   printf("Incluir letras minúsculas? (1 - Sim / 0 - Não): ");
   scanf("%d", &incluirMinusculas);

   printf("Incluir números? (1 - Sim / 0 - Não): ");
   scanf("%d", &incluirNumeros);

   printf("Incluir caracteres especiais? (1 - Sim / 0 - Não): ");
   scanf("%d", &incluirEspeciais);

   gerarSenha(comprimento, incluirMaiusculas, incluirMinusculas, incluirNumeros, incluirEspeciais);

   return 0;
}
