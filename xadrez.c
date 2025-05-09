#include <stdio.h>

int main() {
    // ==========================
    // Simulação do movimento da TORRE
    // ==========================
    // A torre se moverá 5 casas para a direita, usando o laço for
    int i;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for(i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ==========================
    // Simulação do movimento do BISPO
    // ==========================
    // O bispo se moverá 5 casas na diagonal para cima e à direita, usando while
    int contadorBispo = 0;
    printf("Movimento do Bispo (5 casas na Diagonal para Cima e Direita):\n");
    while(contadorBispo < 5) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // ==========================
    // Simulação do movimento da RAINHA
    // ==========================
    // A rainha se moverá 8 casas para a esquerda, usando do-while
    int contadorRainha = 0;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while(contadorRainha < 8);
    
    return 0;
}

