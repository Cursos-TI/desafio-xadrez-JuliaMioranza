#include <stdio.h>

// Nível novato

int main (){

    //Movimento torre - for

    // Informando a peça que será movimentada.
    printf("Movimentando a Torre...\n");

    // Variável:
    int torre;

    for(torre = 0; torre < 5; torre++){
        printf("Direita\n"); //Impressão do movimento (5 vezes para a direita).
    }
    // finalizando movimento da torre, iniciando movimento do bispo.

    //Movimento bispo - while.
    printf("\nMovimentando Bispo...\n");

    // Variável.
    int bispo = 0;

    while (bispo < 5){
        printf("Cima Direita\n"); // Impressão do movimento (5 vezes para cima à direita).
        bispo++;
    }
    // Finalizando movimento do bispo, iniciando movimento da torre.

    printf("\nMovimentando Rainha...\n");

    // Variável.
    int rainha = 0;

    do{
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);

    //finalizando código.
    printf("\nFinalizados os movimentos das peças!\n");

    return 0;












}