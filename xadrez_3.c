#include <stdio.h>

void moverTorre(int casas, char direcao) {
    // Caso base: se o número de casas for zero, paramos a recursão
    if (casas == 0) return;

    // Imprimir a direção do movimento
    if (direcao == 'C') {
        printf("Cima\n");
    } else if (direcao == 'B') {
        printf("Baixo\n");
    } else if (direcao == 'E') {
        printf("Esquerda\n");
    } else if (direcao == 'D') {
        printf("Direita\n");
    }

    // Chamada recursiva para o próximo movimento
    moverTorre(casas - 1, direcao);
}

void moverBispo(int casas, int vertical, int horizontal) {
    // Caso base: se o número de casas for zero, paramos a recursão
    if (casas == 0) return;

    // Movimentos diagonais (acima e à esquerda, abaixo e à direita, etc)
    if (vertical > 0 && horizontal > 0) {
        printf("Cima\n");
        printf("Direita\n");
    } else if (vertical > 0 && horizontal < 0) {
        printf("Cima\n");
        printf("Esquerda\n");
    } else if (vertical < 0 && horizontal > 0) {
        printf("Baixo\n");
        printf("Direita\n");
    } else if (vertical < 0 && horizontal < 0) {
        printf("Baixo\n");
        printf("Esquerda\n");
    }

    // Chamada recursiva para o próximo movimento
    moverBispo(casas - 1, vertical, horizontal);
}

void moverRainha(int casas, char direcaoVertical, char direcaoHorizontal) {
    // Se houver movimento vertical (Cima ou Baixo)
    if (direcaoVertical != '\0') {
        moverTorre(casas, direcaoVertical);
    }
    // Se houver movimento horizontal (Esquerda ou Direita)
    if (direcaoHorizontal != '\0') {
        moverTorre(casas, direcaoHorizontal);
    }
}

void moverCavalo(int casasVertical, int casasHorizontal) {
    // Movimento do Cavalo em L (duas casas para cima e uma para a direita)
    int i, j;

    for (i = 0; i < casasVertical; i++) {
        for (j = 0; j < casasHorizontal; j++) {
            if (i == 0 && j == 0) {
                printf("Cima\n");
                printf("Direita\n");
                break; // Vamos sair do loop quando o movimento for realizado
            }
        }
    }
}

int main() {
    int casas = 5;

    // Movimentos da Torre
    printf("Movimento da Torre:\n");
    moverTorre(casas, 'C'); // Cima
    printf("\n");

    // Movimentos do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(casas, -1, 1); // Para baixo e direita
    printf("\n");

    // Movimentos da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(casas, 'C', 'D'); // Cima e Direita
    printf("\n");

    // Movimentos do Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo(2, 1); // Movimento do Cavalo "L" (Cima e Direita)
    printf("\n");

    return 0;
}