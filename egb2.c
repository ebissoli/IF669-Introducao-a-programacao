#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int qtdTimes;
  char **times;
} campeonato;

void menu();

campeonato *inserirTimes();

int main() {
  int choice;
  printf("Escolha uma opção: ");
  menu();
}

campeonato *inserirTimes() {
  char buffer[40];
  campeonato *times = (campeonato *)malloc(
      sizeof(campeonato)); // aloca memoria para um time qualquer
  if (times == NULL)
    exit(1);
  printf("# de times: ");
  fgets(buffer, 40, stdin);
  fscanf(stdin, "%d", (*times).qtdTimes);
  int tam = (*times).qtdTimes;
  while (tam <= (*times).qtdTimes) {
    printf("nome dos times");
    fgets(buffer, 40, stdin);
    (*times).times[(*times).qtdTimes - tam] = malloc(sizeof(stdin));
    if ((*times).times[(*times).qtdTimes - tam] == NULL)
      exit(1);
    fscanf(stdin, "[^\n]", (*times).times[(*times).qtdTimes - tam]);
    tam--;
  }
  return times;
}

void menu() {
  int choice;
  campeonato *equipes;
  printf("Opcoes: 1.inserir times 2. inserir partidas 3. sair 4. gerar HTML");
  while (1) {
    switch (choice) {
    case 1:
      equipes = inserirTimes();
      break;
    case 2:
      // chamarPartidas();
      break;
    case 3:
      // chamarSair();
      break;
    case 4:
      // chamarHTML();
      break;
    default:
      return 0;
    }
  }
}
