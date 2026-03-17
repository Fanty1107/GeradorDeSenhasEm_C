#include "func.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    srand(time(0));
    int tamanhoDaSenha = 0;

    tamanhoDaSenha = perguntarSenha();
    char *arraySenha = alocacaoDeMemoriaSegura(tamanhoDaSenha);

    printf("Gerando a senha... aguarde...\n");

    clock_t tempo_inicio = clock();

    preencherArrayComNumELetras(arraySenha, tamanhoDaSenha);

    clock_t tempo_fim = clock();

    double tempo_gasto = (double)(tempo_fim - tempo_inicio) / CLOCKS_PER_SEC;

    mensagemFinal(arraySenha,tempo_gasto);

    free(arraySenha);
    return EXIT_SUCCESS;
}