#include <stdio.h>
#include <stdlib.h>

int main() {
  int idade;
  printf ("ELEITORAL\n");
  printf ("Informe a idade: ");
  scanf ("%i", &idade);
  
  if (idade < 0) {
    printf ("Não nasceu.");
  } else {
    if (idade == 41) {
      printf ("Prêmio 1!");
    } else {
      if (idade == 82) {
        printf ("Prêmio 2!");
      } else {
        if (idade > 64) {
          printf ("Voto opcional");
        } else {
          if (idade == 16){
            printf ("Voto opcional");
          } else {
            if (idade == 17){
              printf ("Voto opcional");
            } else {
              if (idade < 16) {
                printf ("Não vota!");
              } else {
                printf ("Voto obrigatório");
              }
            }
          }
        }
      }
    }
  } 
  return 0;
}