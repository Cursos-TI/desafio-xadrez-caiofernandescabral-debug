
#include <stdio.h>

int main() {

    // ===============================
    // DEFINIÇÃO DO NÚMERO DE CASAS
    // ===============================

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ===============================
    // MOVIMENTO DA TORRE (for)
    // Torre move 5 casas para a direita
    // ===============================

    printf("=== Movimento da Torre ===\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ===============================
    // MOVIMENTO DO BISPO (while)
    // Bispo move 5 casas na diagonal
    // (Cima + Direita)
    // ===============================

    printf("\n=== Movimento do Bispo ===\n");

    int contadorBispo = 1;

    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // ===============================
    // MOVIMENTO DA RAINHA (do-while)
    // Rainha move 8 casas para a esquerda
    // ===============================

    printf("\n=== Movimento da Rainha ===\n");

    int contadorRainha = 1;

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}
