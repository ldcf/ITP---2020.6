#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30

typedef struct dados_alunos {
    int matricula;
    char nome[MAX];
}struct_dados;

typedef struct vec_alunos {
    struct_dados alunos[MAX];
    int tam;
}Valunos;

Valunos info_alunos;
int cont = 0;

void insere_aluno(int Matricula, char Nome[MAX]){
    info_alunos.alunos[cont].matricula = Matricula;
    strcpy(info_alunos.alunos[cont].nome , Nome);
}

void imprime_aluno(){
    for (int i = 0; i < cont; i++){
        printf("inserido %d\n", info_alunos.alunos[i].matricula);
    }
    printf("Alunos\n");

    for (int i = 0; i < cont; i++){
        printf("Matricula: %d\n", info_alunos.alunos[i].matricula);
        printf("nome: %s\n", info_alunos.alunos[i].nome);
    }
}

void ordenar_aluno(){
    printf("ordenacao completa");
}

void status(){
    int porcentagem = (cont / info_alunos.tam) * 100;

    printf("memoria ocupada: %d/%d ou %d", cont, info_alunos.tam, porcentagem);
}


int main(){

    int tam_BD, entrada_Matricula;
    scanf("%d", &tam_BD);
    info_alunos.tam = tam_BD;
    char entrada_Comando[MAX], nome_aluno[MAX];
    
    do{
        scanf("%s", &entrada_Comando);
        scanf("%d", &entrada_Matricula);
        scanf("%s", &nome_aluno);

        if (strcmp(entrada_Comando, "inserir") == 0) {
            insere_aluno(entrada_Matricula, nome_aluno);
            cont++;
        }
        if (strcmp(entrada_Comando, "imprimir") == 0) {
            imprime_aluno();
        }
        if (strcmp(entrada_Comando, "ordenar") == 0) {
            ordenar_aluno();
        }
        if (strcmp(entrada_Comando, "status") == 0) {
            status();
        }

        if (strcmp(entrada_Comando, "sair") == 0) {
            break;
        }

    }while(true);
     
    return 0;
}