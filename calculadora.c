#include <stdio.h>

int main()
{
  int x = 0, y = 0, z = 0;

  int menu;

  printf("Digite o numero da opção que voce deseja usar na calculadora de 2 FATORES... \n");
  printf("(1) Para calcular uma operação de Adição.\n");
  printf("(2) Para calcular uma operação de Subtração.\n");
  printf("(3) Para calcular uma operação de Multiplicação.\n");
  printf("(4) Para calcular uma operação de Divisão.\n");
  printf("(5) Encerrar o programa.\n");

  scanf("%d", &menu);

  switch (menu)
  {
  // Opcão 1 *Adição*
  case 1:
    printf("Introduza uma número Válido\n");
    scanf("%d", &x);
    printf("Introduza uma número Válido\n");
    scanf("%d", &y);
    z = x + x;
    printf("A soma é:%d\n", z);
    break;

  // Opção 2 *Subtração*
  case 2:
    printf("Introduza uma número Válido\n");
    scanf("%d", &x);
    printf("Introduza uma número Válido\n");
    scanf("%d", &y);
    z = x - y;
    printf("A subtração é:%d\n", z);
    break;

  // Opção 3 *Multiplicação*
  case 3:
    printf("Introduza uma número Válido\n");
    scanf("%d", &x);
    printf("Introduza uma número Válido\n");
    scanf("%d", &y);
    z = x * y;
    printf("A multiplicação é:%d\n", z);
    break;

  // Opção 4 *Divisão*
  case 4:
    printf("Introduza uma número Válido\n");
    scanf("%d", &x);
    printf("Introduza uma número Válido\n");
    scanf("%d", &y);
    z = x / y;
    printf("A divisão é:%d\n", z);
    break;

  // Opção 5 *Encerrar programa*
  case 5:
    printf("Programa encerrado...\n");
    break;

  // Opção se digitar nenhuma das opções
  default:
    printf("Não corresponde a nenhuma opcao do menu...\n");
  }
  return 0;
}