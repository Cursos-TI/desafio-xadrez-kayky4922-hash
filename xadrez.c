#include <stdio.h>

// Constantes de movimentação
#define BISPO_CASAS 5
#define TORRE_CASAS 5
#define RAINHA_CASAS 8

int main() {

    printf("=== Movimentacao das Pecas - MateCheck ===\n\n");

    // ================================
    // BISPO - Diagonal Superior Direita
    // (Cima + Direita)
    // Estrutura: FOR
    // ================================

    printf("Movimento do Bispo:\n");
    for(int i = 1; i <= BISPO_CASAS; i++) {
        printf("Casa %d: Cima + Direita\n", i);
    }

    printf("\n");

    // ================================
    // TORRE - Direita
    // Estrutura: WHILE
    // ================================

    printf("Movimento da Torre:\n");
    int torre = 1;
    while(torre <= TORRE_CASAS) {
        printf("Casa %d: Direita\n", torre);
        torre++;
    }

    printf("\n");

    // ================================
    // RAINHA - Esquerda
    // Estrutura: DO-WHILE
    // ================================

    printf("Movimento da Rainha:\n");
    int rainha = 1;
    do {
        printf("Casa %d: Esquerda\n", rainha);
        rainha++;
    } while(rainha <= RAINHA_CASAS);

    printf("\n=== Fim da Simulacao ===\n");

    return 0;
}