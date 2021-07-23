/* Autor: Enzo Bissoli
 * login: egb2
 * Descrição: Programa que cria interface textual para gerenciar instituição de
 * ensino Data de criação: Fri Jul 23 08:54:40 2021 Data de modificação: Fri Jul
 * 23 09:00:13 2021
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
  char nome[20];
  char mat[10];
  float notas[5];
  int faltas;
};

struct turma {
  int qtd;
  char professor[20];
  char id[5];
  struct aluno *aluno; // ponteiro para tipo aluno
};

struct turma *inserir(struct turma *turmas);
struct aluno *remover(struct aluno *aluno);
void notas(int id, struct turma *turmas, int seAprovado);
void turmas();

int main() {

  char buffer[21];
  struct turma *turmas = (struct turma *)calloc(0, sizeof(struct turma));
  if (turmas == NULL)
    exit(1);

  int escolha;
  printf("O que deseja fazer?\n");
  printf("(1) Inserir alunos numa turma\n");
  printf("(2) Remover alunos de uma turma\n");
  printf("(3) Checar alunos aprovados de uma turma\n");
  printf("(4) Checar alunos Reprovados de uma turma\n");
  printf("(5) Checar alunos e professores de uma turma\n");
  while (fgets(buffer, sizeof(buffer), stdin), fscanf(stdin, "%d", &escolha),
         escolha > 0 && escolha < 6) {
    switch (escolha) {
    case 1:
      turmas = inserir(turmas);
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    default:;
      ;
    }
  }
  return 0;
}

/* Insere: Preenche turma inserindo alunos, int é necessário para descrever o
 * tamanho da turma */

struct turma *inserir(struct turma *turmas) {
  int tam, cont;
  char buffer[21];

  printf("Insira quantidade de alunos\n");
  fgets(buffer, sizeof(buffer), stdin);
  fscanf(stdin, "%d", &tam);
  turmas = (struct turma *)realloc(turmas, sizeof(*turmas) + 1);
  if (turmas == NULL)
    exit(1);
  int index = sizeof(*turmas) / sizeof(struct turma);
  turmas->aluno = (struct aluno *)calloc(tam, sizeof(struct aluno));
  while (index-- > 0) {
    printf("Insira nome do aluno\n");
    fgets(buffer, sizeof(buffer), stdin);
    fscanf(stdin, "%[^\n]", turmas->aluno[index].nome);
    printf("Insira matrícula do aluno\n");
    fgets(buffer, sizeof(buffer), stdin);
    fscanf(stdin, "%[^\n]", turmas->aluno[index].mat);
    printf("Insira notas do aluno\n");
    for (cont = 0; cont <= 4; cont++) {
      fgets(buffer, sizeof(buffer), stdin);
      fscanf(stdin, "%f", &turmas->aluno[index].notas[cont]);
    }
    printf("Quantidade de faltas do aluno\n");
    fgets(buffer, sizeof(buffer), stdin);
    fscanf(stdin, "%d", &turmas->aluno[index].faltas);
  }
  return turmas; // sempre retorna um vetor atualizado com a última turma
                 // adicionada
}
