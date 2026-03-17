#include "func.h"
#include <stdio.h>
#include <stdlib.h>

#define NUM_ALEATORIO rand() % 10 + 48
#define ALFABETO_RAND_MA rand() % 26 + 65
#define ALFABETO_RAND_MIN rand() % 26 + 97

void preencherArrayComNumELetras(char array[], int tamanhoArray){
    //48 a 57 são numeros
    //65 a 90 alfabeto maiusculo
    //97 a 122 alfabeto minusculo
    //numero = rand() % (maximo - minimo + 1) + minimo
    
for(int i = 0; i < tamanhoArray; i++){
    int tipo = rand() % 3;
    int chanceSimbolo = rand() % 4;

    if(chanceSimbolo == 1){ // 25% chance de símbolo
        array[i] = (rand() % 2) ? '@' : '&';
    } else {
        switch(tipo){
            case 0: array[i] = NUM_ALEATORIO; break;
            case 1: array[i] = ALFABETO_RAND_MA; break;
            case 2: array[i] = ALFABETO_RAND_MIN; break;
            }
        }
    }
array[tamanhoArray] = '\0';
}
int perguntarSenha(){
    int tamanho = 0;
    printf("Digite o tamanho da senha: ");
    scanf("%d", &tamanho);
    return tamanho;
}
char* alocacaoDeMemoriaSegura(int tamanhoDaSenha){
    char *arraySenha = (char*)malloc((tamanhoDaSenha + 1) * sizeof(char));
    if (arraySenha == NULL) {
    printf("Erro: Memória insuficiente!\n");
    exit(EXIT_FAILURE);
    }
    return arraySenha;
}
void mensagemFinal(char array[], double tempo){
    printf("\nSua senha gerada e: %s\n", array);
    printf("Tempo de processamento: %f segundos.\n", tempo);
}