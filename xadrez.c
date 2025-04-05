#include <stdio.h>

// Função recursiva para mover a Torre 5 casas para a direita
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva reduzindo o número de casas
}

// Função recursiva para mover a Rainha 8 casas para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para mover o Bispo 5 casas na diagonal superior direita
// Utilizando loops aninhados dentro da recursividade (conforme exigido)
void moverBispo(int casas) {
    if (casas <= 0) return;

    // Loop externo simula o eixo vertical (Cima)
    for (int i = 0; i < 1; i++) {
        // Loop interno simula o eixo horizontal (Direita)
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// Função que simula o movimento do Cavalo: duas casas para cima, uma para direita (movimento em L)
// Com loops aninhados, múltiplas variáveis, break e continue
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    // Simulando duas casas para cima e uma para direita
    for (int i = 1; i <= 2; i++) {
        if (i == 2) {
            // Segunda casa para cima
            printf("Cima\n");
        } else {
            // Primeira casa para cima
            printf("Cima\n");
        }

        for (int j = 0; j < 2; j++) {
            if (j == 0) continue; // pula a primeira iteração
            if (j == 1) {
                // uma casa para a direita
                printf("Direita\n");
                break; // encerra o loop interno após o movimento
            }
        }
    }
}

int main() {
    // Constantes com o número de casas para cada peça
    const int passosTorre = 5;
    const int passosBispo = 5;
    const int passosRainha = 8;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(passosTorre);

    // Espaço entre as peças
    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(passosBispo);

    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(passosRainha);

    printf("\n");

    // Movimento do Cavalo
    moverCavalo();

    return 0;
}
