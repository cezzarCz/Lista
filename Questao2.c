#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastroPessoa {
  char nome[30], end[30], comp[30], bairro[30], data[10];
  char estado[10], cidade[10], nasc[10], email[20], cep[15];
  int numeroAp, DDD, telefone, cpf;
  char simnao;

  char iEstadual[30], iMunicipal[30], CNAE[20];
  int contatoResp;
} Pessoa;

typedef struct cadastroVeic {
  char placa[10], modelo[10], cor[10];
  int ano;
} Carro;

int main() {
  Pessoa cadastro;
  Carro carro;
  int tipo = 0;

  printf("Pessoa Fisica    Pessoa Juridica\n");
  printf("      1                 2         \n");
  scanf("%d", &tipo);
  printf ("\n");
  if (tipo == 1) {
    printf("Nome completo: ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%[^\n]s", &cadastro.nome);
    printf("\n-------------\n");
    printf("Endereço: ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%[^\n]s", &cadastro.end);
    printf("\n-------------\n");
    printf("Número: ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%d", &cadastro.numeroAp);
    printf("\n-------------\n");
    printf("Complemento: ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%[^\n]s", &cadastro.comp);
    printf("\n-------------\n");
    printf("Bairro: ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%[^\n]s", &cadastro.bairro);
    printf("\n-------------\n");
    printf("CEP: ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%[^\n]s", &cadastro.cep);
    printf("\n-------------\n");
    printf("Estado: ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%[^\n]s", &cadastro.estado);
    printf("\n-------------\n");
    printf("Cidade: ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%[^\n]s", &cadastro.cidade);
    printf("\n-------------\n");
    printf("DDD: ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%d", &cadastro.DDD);
    printf("\n-------------\n");
    printf("Telefone: ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%d", &cadastro.telefone);
    printf("\n-------------\n");
    printf("CPF: ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%i", &cadastro.cpf);
    printf("\n-------------\n");
    printf("Data de nascimento: ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%[^\n]s", &cadastro.nasc);
    printf("\n-------------\n");
    printf("Receber boletos por email (S ou N:): ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%c", &cadastro.simnao);
    printf("\n-------------\n");
    printf("Email: ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%[^\n]s", &cadastro.email);
    printf("\n-------------\n");
    printf("Data: ");
    fflush(stdin);
    __fpurge(stdin);
    scanf("%[^\n]s", &cadastro.data);
    printf("\n-------------\n");
  } else {
    if (tipo == 2) {
      printf("Razão social: ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%[^\n]s", &cadastro.nome);
      printf("\n-------------\n");
      printf("Endereço: ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%[^\n]s", &cadastro.end);
      printf("\n-------------\n");
      printf("Número: ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%d", &cadastro.numeroAp);
      printf("\n-------------\n");
      printf("Complemento: ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%[^\n]s", &cadastro.comp);
      printf("\n-------------\n");
      printf("Bairro: ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%[^\n]s", &cadastro.bairro);
      printf("\n-------------\n");
      printf("CEP: ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%[^\n]s", &cadastro.cep);
      printf("\n-------------\n");
      printf("Estado: ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%[^\n]s", &cadastro.estado);
      printf("\n-------------\n");
      printf("Cidade: ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%[^\n]s", &cadastro.cidade);
      printf("\n-------------\n");
      printf("DDD: ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%d", &cadastro.DDD);
      printf("\n-------------\n");
      printf("Telefone: ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%d", &cadastro.telefone);
      printf("\n-------------\n");
      printf("CNPJ: ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%i", &cadastro.cpf);
      printf("\n-------------\n");
      printf("Insc. Estadual: ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%[^\n]s", &cadastro.iEstadual);
      printf("\n-------------\n");
      printf("Insc. Municipal: ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%[^\n]s", &cadastro.iMunicipal);
      printf("\n-------------\n");
      printf("CNAE: ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%[^\n]s", &cadastro.CNAE);
      printf("\n-------------\n");
      printf("Data de nascimento: ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%[^\n]s", &cadastro.nasc);
      printf("\n-------------\n");
      printf("Receber boletos por email (S ou N:): ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%c", &cadastro.simnao);
      printf("\n-------------\n");
      printf("Email: ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%[^\n]s", &cadastro.email);
      printf("\n-------------\n");
      printf("Contato do responsavel: ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%d", &cadastro.contatoResp);
      printf("\n-------------\n");
      printf("Data: ");
      fflush(stdin);
      __fpurge(stdin);
      scanf("%[^\n]s", &cadastro.data);
      printf("\n-------------\n");
    };
  };

  system("clear");
  printf ("Dados do veículo:\n");
  printf ("Placa:\n");
  fflush(stdin);
  __fpurge(stdin);
  scanf ("%[^\n]s", &carro.placa);
  printf ("Modelo:\n");
  fflush(stdin);
  __fpurge(stdin);
  scanf ("%[^\n]s", &carro.modelo);
  printf ("Cor: ");
  fflush(stdin);
  __fpurge(stdin);
  scanf ("%[^\n]s", &carro.cor);
  system("clear");
  
  printf ("DADOS DO CREDENCIADO\n");
  printf ("Razão Social / Nome Completo:\n");
  printf ("%s\n", cadastro.nome);
  printf ("--------------------------------------\n");
  printf ("Endereço:\n");
  printf ("%s\n", cadastro.end);
  printf ("--------------------------------------\n");
  printf ("Numero:        Complemento:        Bairro:\n");
  printf ("%d                  %s                  %s\n", cadastro.numeroAp, cadastro.comp, cadastro.bairro);
  printf ("--------------------------------------\n");
  printf ("CEP:          Estado:     Cidade:\n");
  printf ("%s          %s        %s\n", cadastro.cep, cadastro.estado, cadastro.cidade);
  printf ("--------------------------------------\n");
  printf ("DDD:        Telefone:\n");
  printf ("%d        %d\n", cadastro.DDD, cadastro.telefone);
  printf ("--------------------------------------\n");
  
  if (tipo==1){
    printf ("CPF:\n");
    printf ("%d\n", cadastro.cpf);
  } else {
    printf ("CNPJ:\n");
    printf ("%d\n", cadastro.cpf);
  };
  printf ("--------------------------------------\n");
  
  if (tipo==2){
    printf ("Insc. Estadual:                Insc. Municipal:\n");
    printf ("%s                %s\n", cadastro.iEstadual, cadastro.iMunicipal);
    printf ("--------------------------------------\n");
    printf ("CNAE:              Data de nascimento:                Receber boletos por email(s - Sim || n Não):\n");
    printf ("%s                %s                %c\n", cadastro.CNAE, cadastro.nasc, cadastro.simnao);
  } else {
    printf ("Data de nascimento:                 Receber boletos por email(s - Sim || n Não): \n");
    printf ("%s                %c\n", cadastro.nasc, cadastro.simnao);
  }
  printf ("--------------------------------------\n");
  printf ("Email:\n");
  printf ("%s\n", cadastro.email);
  printf ("--------------------------------------\n");
  if (tipo==2){
    printf ("Contato do Responsavel:\n");
    printf ("%d\n", cadastro.contatoResp);
  }
  printf ("--------------------------------------\n");
  printf ("Data:\n");
  printf ("%s\n", cadastro.data);
  printf ("--------------------------------------\n");
  
  printf ("DADOS DO VEÍCULO\n");
  printf ("Placa:              Modelo:                Cor:\n");
  printf ("%s                  %s                 %s\n");
  return 0;
}