#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

char leValidaOperador(char operando);
float soma(float n, float m);
float subt(float n, float m);
float mult(float n, float m);
float divi(float n, float m);

int main() {
  float n1, n2, resultado;
  char op;
  int escolha;

  do {
    printf("Informe n1: ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%f", &n1);
    fflush(stdin);
    __fpurge(stdin);
    op = leValidaOperador(op);
    fflush(stdin);
    __fpurge(stdin);
    printf("Informe n2: ");
    scanf("%f", &n2);
    printf("\n--------------------\n");

    if (op == '+') {
      resultado = soma(n1, n2);
      printf("Resultado da soma: %.2f", resultado);
    } else {
      if (op == '-') {
        resultado = subt(n1, n2);
        printf("Resultado da subtração: %.2f", resultado);
      } else {
        if (op == '/') {
          if (n2 == 0) {
            printf("Não é possível dividir por zero!\n");
          } else {
            resultado = divi(n1, n2);
            printf("Resultado da divisão: %.2f", resultado);
          }
        } else {
          resultado = mult(n1, n2);
          printf("Resultado da multiplicação: %.2f", resultado);
        }
      }
    }
    printf("\n--------------------\n");
    printf ("Realizar outra operação?\n (1-Sim || Outro-Não): ");
    scanf ("%d", &escolha);
    
  } while (escolha==1);

  return 0;
}

char leValidaOperador(char operando) {
  int i;
  do {
    printf("Infome o operador: ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%c", &operando);
    if (operando != '+' && operando != '-' && operando != '/' &&
        operando != '*') {
      printf("Operador inválido. Tente novamente!\n");
    }
  } while (operando != '+' && operando != '-' && operando != '/' &&
           operando != '*');

  return operando;
}
float soma(float n, float m) {
  float result;
  result = n + m;
  return result;
}
float subt(float n, float m) {
  float result;
  result = n - m;
  return result;
}
float mult(float n, float m) {
  float result;
  result = n * m;
  return result;
}
float divi(float n, float m) {
  float result;
  result = n / m;
  return result;
}