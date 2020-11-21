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
        scanf("%s" curso.proposta[0].titulo);
        array[0] = curso.proposta[0].titulo;

        printf("Qual o tipo do evento? \n1. Oral \n2. Oficina \n3. Poster \n4. Laboratório ");
        scanf("%d", &curso.proposta[0].tipoEvento);
        array[0] = curso.proposta[0].tipoEvento;

        printf("Esse evento ocorrerá no dia 23 ou 24 de dezembro? ");
        scanf("%d", &curso.proposta[0].dataAcontecimento);
        array[0] = curso.proposta[0].dataAcontecimento;

        printf("Qual o horário? ");
        scanf("%s", curso.proposta[0].hora);

        if (curso.proposta[0].hora == curso.proposta[0].hora) {
            printf("Esse horário já foi cadastrado");
            break
        } else {
            array[0] = curso.proposta[0].hora;
        } 

        printf("Há algum professor entre os proponentes? \n1. Sim \n2. Não ");
        scanf("%d", &resp1);
        if (resp1 == 1) {
            printf("Insira o nome com componentes: ");
            scanf("%s", curso.proposta[0].nomeProponentesComProf);
            array[0] = curso.proposta[0].nomeProponentesComProf;
        } else {
            printf("Insira o nome com componentes: ");
            scanf("%s", curso.proposta[0].nomeProponentesSemProf);
            array[0] = curso.proposta[0].nomeProponentesSemProf;
        }
    } else {
        for (i = 1; i <= 9; i++) {
            if (array[i-1] != 0 && array[i] == 0 ) {
                printf("Qual o título do evento: ");
                scanf("%s" curso.proposta[i].titulo);
                array[i] = curso.proposta[i].titulo;
                        
                printf("Qual o tipo do evento? \n1. Oral \n2. Oficina \n3. Poster \n4. Laboratório ");
                scanf("%d", &curso.proposta[i].tipoEvento);
                array[i] = curso.proposta[i].tipoEvento;

                printf("Esse evento ocorrerá no dia 23 ou 24 de dezembro? ");
                scanf("%d", &curso.proposta[i].dataAcontecimento);
                array[i] = curso.proposta[i].dataAcontecimento;

                printf("Qual o horário? ");
                scanf("%s", curso.proposta[i].hora);
                if (curso.proposta[i].hora == curso.proposta[i].hora) {
                    printf("Esse horário já foi cadastrado");
                    break
                } else {
                    array[i] = curso.proposta[i].hora;
                } 
                
                printf("Há algum professor entre os proponentes? \n1. Sim \n2. Não ");
                scanf("%d", &resp1);
                if (resp1 == 1) {
                    printf("Insira o nome com componentes: ");
                    scanf("%s", curso.proposta[i].nomeProponentesComProf);
                    array[i] = curso.proposta[i].nomeProponentesComProf;
                } else {
                    printf("Insira o nome com componentes: ");
                    scanf("%s", curso.proposta[i].nomeProponentesSemProf);
                    array[i] = curso.proposta[i].nomeProponentesSemProf;
            } else if (array[i] != 0) {
                printf("Já excedeu o limite de tarefas");
            }
        }
    }
}

int cadastro () {
    Curso curso;
    int resp, num, i;

    printf("Quantos eventos deseja cadastrar? ");
    scanf("%d", resp);

    for (i = 0; i <= resp; i ++) {
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
    }

}


int main() {
    int opcao;

    anulandoArray(cursoEcomp);
    anulandoArray(cursoEngal);
    anulandoArray(cursoConta);
    anulandoArray(cursoFilo);
    anulandoArray(cursoGeo);
    anulandoArray(cursoOdont);
    anulandoArray(cursoMedi);

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
