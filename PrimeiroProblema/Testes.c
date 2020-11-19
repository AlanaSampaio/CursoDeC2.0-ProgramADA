#include <stdio.h>
#include <stdint.h>

typedef struct {
    char titulo[10];
    int tipoEvento[10];
    int dataAcontecimento[10];
    char hora[10];
    char nomeProponentes[5];
} Propostas;

void anulandoArray(int array[10]) {
    int i, num = 0;
    for (i = 0; i <= 9; i++) {
        array[i] = num;
    }
    
}

int main () {
    Propostas p;

    anulandoArray(p.tipoEvento);


    scanf("%d", &p.tipoEvento[0]);
    scanf("%d", &p.tipoEvento[1]);

    printf("\n%d", p.tipoEvento[0]);
    printf("\n%d", p.tipoEvento[1]); //pq tá dando 8?
    printf("\n%d", p.tipoEvento[2]);
    printf("\n%d", p.tipoEvento[3]);

    scanf("%d", &p.tipoEvento[0]);
    scanf("%d", &p.tipoEvento[1]);

    printf("\n%d", p.tipoEvento[0]);
    printf("\n%d", p.tipoEvento[1]); //pq tá dando 8?
    printf("\n%d", p.tipoEvento[2]);
    printf("\n%d", p.tipoEvento[3]);


}