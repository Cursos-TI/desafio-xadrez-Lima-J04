#include <stdio.h>

int main() {
    // Definindo o número de casas a serem movidas pelo Cavalo
    int movimentos_para_baixo = 2;   // O Cavalo se move 2 casas para baixo
    int movimentos_para_esquerda = 1; // O Cavalo se move 1 casa para a esquerda

    // Utilizando dois loops aninhados (um for e um while)
    
    // Primeiro loop: para as 2 casas para baixo
    for (int i = 0; i < movimentos_para_baixo; i++) {
        // Segundo loop: para a 1 casa à esquerda
        int j = 0;
        while (j < movimentos_para_esquerda) {
            printf("Baixo\n"); // Movimento para baixo
            j++;  // Incrementando o movimento à esquerda
        }
    }

    // Depois, imprimimos a direção para a esquerda apenas uma vez, pois o movimento do Cavalo é 2 para baixo e 1 para a esquerda.
    printf("Esquerda\n");

    return 0;
}