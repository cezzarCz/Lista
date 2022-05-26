#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char nome[30];
  int i, tam, k, j;

  printf("Informe o nome: \n");
  fflush(stdin);
  __fpurge(stdin);
  scanf("%[^\n]s", &nome);
  tam = strlen(nome);
  for (i = 0; i < tam; i++) {
    if (nome[i] == ' ') {
      k = i + 1;
    }
  }
  for (i = k; i < tam; i++) {
    printf("%c", toupper(nome[i]));
  }
  printf(", ");
  for (i = 0; i < tam; i++) {
    if (i == 0) {
      printf("%c. ", toupper(nome[i]));
    }
  }
  for (i=tam; i>=0; i--){
    if (nome[i] == ' '){
      j = i;
    } 
  }

  printf ("%c.;", toupper(nome[j+1]));

  return 0;
}