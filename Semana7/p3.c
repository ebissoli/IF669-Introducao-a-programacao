#include <stdio.h>

typedef struct{
    int matricula;
    float nota;
    char curso[20];
} Aluno;

int main(){
    Aluno aluno;
    printf("Digite matricula:\n"); scanf("%d", &aluno.matricula);
    printf("Digite nota:\n"); scanf("%f%*c", &aluno.nota);
    printf("Digite curso:\n"); scanf("%[^\n]", aluno.curso);
    Aluno *pAluno = &aluno;
    printf("matricula:%d | nota:%f | curso:%s", (*pAluno).matricula, (*pAluno).nota, (*pAluno).curso);
    return 0;
}
