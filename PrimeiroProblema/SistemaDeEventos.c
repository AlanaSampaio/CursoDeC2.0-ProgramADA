#include <stdio.h>

int cursoEcomp[10];
int cursoEngal[10];
int cursoConta[10];
int cursoFilo[10];
int cursoGeo[10];
int cursoOdont[10];
int cursoMedi[10];
int cursos[7];

typedef struct {
    char titulo[10];
    int tipoEvento[10];
    int dataAcontecimento[10];
    char hora[10];
    char nomeProponentesComProf[5];
    char nomeProponentesSemProf[5];
} Propostas;

typedef struct {
    int cursos;
    Propostas proposta[100];
} Curso;

void anulandoArray(int array[10]) {
    int i, num = 0;
    for (i = 0; i <= 9; i++) {
        array[i] = num;
    }
} 

void verificarArray(int array[10], int info) {
    int i;
    if (array[0] = 0) {
        array[0] = info;
    } else {
        for (i = 1; i <= 9; i++) {
            printf("Oi");
        }
    }
}

void inserirAtv(int array[10]){
    int resp1, i;
    Curso curso;

    if (array[0] == 0) {
        printf("Qual o título do evento: ");
        scanf("%s" &curso.proposta[0].titulo[0]);
        array[0] = curso.proposta[0].titulo[0];

        printf("Qual o tipo do evento? \n1. Oral \n2. Oficina \n3. Poster \n4. Laboratório ");
        scanf("%d", &curso.proposta[0].tipoEvento[0]);
        array[0] = curso.proposta[0].tipoEvento[0];

        printf("Esse evento ocorrerá no dia 23 ou 24 de dezembro? ");
        scanf("%d", &curso.proposta[0].dataAcontecimento[0]);
        array[0] = curso.proposta[0].dataAcontecimento[0];

        printf("Qual o horário? ");
        scanf("%s", &curso.proposta[0].hora[0]);
        array[0] = curso.proposta[0].hora[0];

        printf("Há algum professor entre os proponentes? \n1. Sim \n2. Não ");
        scanf("%d", &resp1);
        if (resp1 == 1) {
            printf("Insira o nome com componentes: ");
            scanf("%s", &curso.proposta[0].nomeProponentesComProf[0]);
            array[0] = curso.proposta[0].nomeProponentesComProf[0];
        } else {
            printf("Insira o nome com componentes: ");
            scanf("%s", &curso.proposta[0].nomeProponentesSemProf[0]);
            array[0] = curso.proposta[0].nomeProponentesSemProf[0];
        }
    } else {
        for (i = 1; i <= 9; i++) {
            if (array[i-1] != 0 && array[i] == 0 ) {
                printf("Qual o título do evento: ");
                scanf("%s" &curso.proposta[i].titulo[i]);
                array[i] = curso.proposta[i].titulo[i];
                        
                printf("Qual o tipo do evento? \n1. Oral \n2. Oficina \n3. Poster \n4. Laboratório ");
                scanf("%d", &curso.proposta[i].tipoEvento[i]);
                array[i] = curso.proposta[i].tipoEvento[i];

                printf("Esse evento ocorrerá no dia 23 ou 24 de dezembro? ");
                scanf("%d", &curso.proposta[i].dataAcontecimento[i]);
                array[i] = curso.proposta[i].dataAcontecimento[i];

                printf("Qual o horário? ");
                scanf("%s", &curso.proposta[i].hora[i]);
                array[i] = curso.proposta[i].hora[i];

                printf("Há algum professor entre os proponentes? \n1. Sim \n2. Não ");
                scanf("%d", &resp1);
                if (resp1 == 1) {
                    printf("Insira o nome com componentes: ");
                    scanf("%s", &curso.proposta[i].nomeProponentesComProf[i]);
                    array[i] = curso.proposta[i].nomeProponentesComProf[i];
                } else {
                    printf("Insira o nome com componentes: ");
                    scanf("%s", &curso.proposta[i].nomeProponentesSemProf[i]);
                    array[i] = curso.proposta[i].nomeProponentesSemProf[i];
            } else if (array[i] != 0) {
                printf("Já excedeu o limite de tarefas");
            }
        }
    }
}

int cadastro () {
    Curso curso;
    int resp, resp1, num;

    do {
        printf("Qual curso deseja escolher: \n1. Engenharia da Computação \n2. Engenharia de Alimentos \n3. Ciências Contábeis \n4. Filosofia \n5. Geografia \n6. Odontologia \n7. Medicina\n");
        scanf("%d", &num);

        if (num == 1) {
            inserirAtv(cursoEcomp);
        } else if (num == 2) {
            inserirAtv(cursoEngal);
        } else if (num == 3) {
            inserirAtv(cursoConta);
        } else if (num == 4) {
            inserirAtv(cursoFilo);
        } else if (num == 5) {
            inserirAtv(cursoGeo);
        } else if (num == 6) {
            inserirAtv(cursoOdont);
        } else if (num == 7) {
            inserirAtv(cursoMedi);
        } else {
            printf("Não corresponde a nenhum curso");
        }

    }while (resp == 2);

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
