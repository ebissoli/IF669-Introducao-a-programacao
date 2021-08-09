#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// estruturas
typedef struct {
  char remetente[50];
  char assunto[50];
  char mensagem[200];

} email;

typedef struct {
  char nome[50];
  char senha[50];
  int qtdRecebidos, qtdEnviados;
  email *recebidos;
  email *enviados;
} Usuario;

// assinaturas
void cadastrarUsuario(char *nome, char *senha);
void login(char *nome, char *senha);
void enviarEmail(char *nomeRemetente);
void verRecebidos(Usuario usuario);
void verEnviados(Usuario usuario);

int main() {
  int escolha;
  char buffer[200];
  Usuario *usuario = NULL;
  email *email = NULL;
  if (usuario == NULL && email == NULL)
    exit(1);
  printf("Escolha uma das opções 1->Cadastro, 2->Login: \n");
  while (1) {
    fgets(buffer, 1, stdin);
    fscanf(stdin, "%d", &escolha);
    switch (escolha) {
    case 1:
      printf("Nome do Usuário e Senha: \n");
      fgets(buffer, 50, stdin);
      fscanf(stdin, "49[^\n]", (usuario)->nome);
      fgets(buffer, 50, stdin);
      fscanf(stdin, "49[^\n]", (usuario)->senha);
      cadastrarUsuario((*usuario).nome, (usuario)->senha);
      break;
    case 2:
      printf("Nome do Usuário e Senha: \n");
      fgets(buffer, 50, stdin);
      fscanf(stdin, "49[^\n]", (usuario)->nome);
      fgets(buffer, 50, stdin);
      fscanf(stdin, "49[^\n]", (usuario)->senha);
      login((usuario)->nome, (usuario)->senha);
      break;
    default:
      free(usuario);
      free(email);
      return 0;
    }
  }
}

void cadastrarUsuario(char *nome, char *senha) {
  FILE *pfile = fopen("user.bin", "a+b");
  char c = '\\';
  if (pfile == NULL) {
    printf("erro na leitura");
    exit(1);
  }
  Usuario User;
  strcpy(User.nome, nome);
  strcpy(User.senha, senha);
  *User.recebidos = 0;
  *User.enviados = 0;
  fwrite(&User, sizeof(Usuario), 1, pfile);
  fclose(pfile);
}

void login(char *nome, char *senha) {
  Usuario teste;
  Usuario user;
  char buffer[50];
  int flag = 1;
  int escolha2;
  email *email = NULL;
  if (email == NULL)
    exit(1);
  FILE *pfile = fopen("user.bin", "rb");
  fseek(pfile, 0, SEEK_SET); // seta no inicio o primeiro user
  while (flag) {
    while (ftell(pfile) != EOF) {
      fread(&teste, sizeof(Usuario), 1, pfile);
      if (!strcmp(teste.nome, user.nome)) {
        if (!(strcmp(teste.senha, user.senha))) {
          printf("Olá %s, o que deseja fazer?", nome);
          printf("1. email-recebidos, 2.email-enviados, 3.enviar e-mail");
          fgets(buffer, 1, stdin);
          fscanf(stdin, "%d", &escolha2);
          switch (escolha2) {
          case 1:
            printf("Nome do remetente");
            fgets(buffer, 50, stdin);
            fscanf(stdin, "49[^\n]", (email)->remetente);
            enviarEmail(email->remetente);
            break;
          case 2:
            verRecebidos(user);
            break;
          case 3:
            verEnviados(user);
            break;
          default:
            printf("Volte sempre");
            flag = 0;
          }
        }
        fseek(pfile, sizeof(Usuario), SEEK_CUR); // proximo;
      } else {
        fseek(pfile, sizeof(Usuario), SEEK_CUR); // proximo;
      }
    }
    printf("Não encontrado, digite dados novamente");
    printf("Nome do Usuário e Senha: \n");
    fgets(buffer, 50, stdin);
    fscanf(stdin, "49[^\n]", nome);
    fgets(buffer, 50, stdin);
    fscanf(stdin, "49[^\n]", senha);
  }
  fclose(pfile);
}

void enviarEmail(char *nomeRemetente) {
  char buffer[200];
  Usuario user;
  Usuario remetente;
  email email;
  strcpy(email.remetente, nomeRemetente);
  Usuario teste;
  printf("Nome do usuario: \n");
  fgets(buffer, 50, stdin);
  fscanf(stdin, "49[^\n]", user.nome);
  printf("Conteudo da menssagem \n");
  fgets(buffer, 200, stdin);
  fscanf(stdin, "49[^\n]", email.mensagem);
  user.recebidos =
      (email *)realloc(user.recebidos, (*user.recebidos + 1) * sizeof(email));
  remetente.enviados = (email *)realloc(
      user.recebidos, (*remetente.enviados + 1) * sizeof(email));
  *user.recebidos++;
  *remetente.enviados++;
  FILE *pfile = fopen("users.bin", "a+b");
  while (ftell(pfile) != EOF) {
    fread(&teste, sizeof(Usuario), 1, pfile);
    fread(&teste, sizeof(Usuario), 1, pfile);
    if (!strcmp(teste.nome, user.nome) ||
        !(strcmp(teste.nome, remetente.nome))) {
      if (!(strcmp(teste.senha, user.senha))) {
        fwrite(&user, sizeof(Usuario), 1, pfile);
      }
      if (!(strcmp(teste.senha, remetente.senha))) {
        fwrite(&remetente, sizeof(Usuario), 1, pfile);
      }
      fseek(pfile, sizeof(Usuario), SEEK_CUR); // proximo;
    } else {
      fseek(pfile, sizeof(Usuario), SEEK_CUR); // proximo;
    }
  }
  free user;
  free remetente;
  fclose(pfile);
}
