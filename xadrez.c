#include <stdio.h>

int main() {
    printf("Movimento do Cavalo:\n");

    // Simulação de um movimento em L: 2 casas para baixo e 1 para esquerda
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");

        // Loop aninhado simula o movimento lateral após o vertical
        if (i == 1) {
            int j = 0;
            while (j < 1) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}
