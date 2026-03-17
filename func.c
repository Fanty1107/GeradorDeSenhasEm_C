#include "func.h"
#include <stdio.h>
#include <stdlib.h>

void preencherArrayComNumELetras(char array[], int tamanhoArray){
    //48 a 57 são numeros
    //65 a 90 alfabeto maiusculo
    //97 a 122 alfabeto minusculo
    //numero = rand() % (maximo - minimo + 1) + minimo
    
    //1 = numero 2 = maiusculo 3 = minusculo
    for(int i = 0; i < tamanhoArray; i++){
        int tipo = rand() % 3 + 1;

        switch (tipo)
        {
        case 1:
            array[i] = rand() % 10 + 48;
            break;
        case 2:
            array[i] = rand() % 26 + 65;
            break;
        case 3:
            array[i] = rand() % 26 + 97;
            break;                    
        default:
            break;
        }
    }
    array[tamanhoArray] = '\0'; //para realmente ser uma string ^^
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