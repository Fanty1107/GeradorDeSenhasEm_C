#include "func.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    srand(time(0)); //iniciar a seed do random com base no tempo 0 (1 de janeiro de 1970 00:00)
    int tamanhoDaSenha = 0;
    tamanhoDaSenha = perguntarSenha();
    char *arraySenha = alocacaoDeMemoriaSegura(tamanhoDaSenha); //malloc

    printf("Gerando a senha... aguarde...\n");
    clock_t tempo_inicio = clock();
    preencherArrayComNumELetras(arraySenha, tamanhoDaSenha);
    clock_t tempo_fim = clock();
    double tempo_gasto = (double)(tempo_fim - tempo_inicio) / CLOCKS_PER_SEC;

    mensagemFinal(arraySenha,tempo_gasto);

    free(arraySenha); //liberar a memoria
    return EXIT_SUCCESS;
}