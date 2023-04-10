#include <stdio.h>
#include <stdlib.h>

struct BolsadeValores{
    char nomeEmp[50];
    char areaatuacaoEmp[50];
    float valorAcao;
    float valoAnterior;
    double variacaoAcao;
};

void ajuste(struct BolsadeValores*ponteiro);
void imprime(struct BolsadeValores*ponteiro);

int main(void){
    // Crie um array de tr�s structs BolsadeValores
    struct BolsadeValores empresas[3];

    // Preencha as structs com um loop for
    for(int i = 0; i < 3; i++) {
        printf("Digite o nome da empresa %d: ", i+1);
        scanf("%s", empresas[i].nomeEmp);
        printf("Digite a �rea de atua��o da empresa %d: ", i+1);
        scanf("%s", empresas[i].areaatuacaoEmp);
        printf("Digite o valor da a��o da empresa %d: ", i+1);
        scanf("%f", &empresas[i].valorAcao);
        printf("Digite o valor anterior da a��o da empresa %d: ", i+1);
        scanf("%f", &empresas[i].valoAnterior);
        printf("Digite a varia��o da a��o da empresa %d: ", i+1);
        scanf("%lf", &empresas[i].variacaoAcao);
    }

    // Chame a fun��o imprime para exibir as informa��es de cada empresa
    for(int i = 0; i < 3; i++) {
        imprime(&empresas[i]);
    }

    return 0;
}

void imprime(struct BolsadeValores*ponteiro){
    printf("\nNome:%s",ponteiro->nomeEmp);
    printf("\nAtua��o:%s ",ponteiro->areaatuacaoEmp);
    printf("\nValor da A��o:%.2f reais ",ponteiro->valorAcao);
    printf("\nValor anterior:%.2f reais ",ponteiro->valoAnterior);
    printf("\nVaria��o da A��o:%.3f ",ponteiro->variacaoAcao);
}
