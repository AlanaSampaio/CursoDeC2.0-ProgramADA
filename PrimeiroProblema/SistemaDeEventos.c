#include <stdio.h>

typedef struct {
    int quantidadeCurso;
    char cursos;
} Curso;

typedef struct {
    char titulo[10];
    char tipoEvento[10];
    int dataAcontecimento[10];
    char hora[10];
    char nomeProponentes[5];
} Propostas;

int cadastro () {
    Curso curso;
    Propostas propo;

    printf("Quantos cursos irão participar? ");
    scanf("%d", &curso.quantidadeCurso);

    printf("Qual o tipo do evento? Podendo ser oral, oficina, poster, laboratório ");
    scanf("%s", %propo.tipoEvento.cursos);

    printf("Qual a data desse evento? ");
    scanf("%s", &propo.dataAcontecimento.cursos);

    printf("oi");

}


int main() {
    int opcao;

    printf("MENU\n1. Cadastrar novo evento\n2. Visualizar quantas apresentações de cada tipo acontecerão em cada um dos dias\n3. Visualizar qual curso tem mais propostas\n4. Visualizar qual curso tem menos propostas\n5. Visualizar todas as propostas ofertadas apenas por estudantes\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        cadastro();
        break;
    
    default:
        break;
    }

  return 0;
}
