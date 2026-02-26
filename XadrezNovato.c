#include <stdio.h>

// ==========================
// Torre - Recursivo
// ==========================
void torre(int casas) {

    if (casas == 0) {
        return;
    }

    printf("Direita\n");
    torre(casas - 1);
}

// ==========================
// Rainha - Recursivo
// ==========================
void rainha(int casas) {

    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");
    rainha(casas - 1);
}

// ==========================
// Bispo - Recursivo + Loops
// ==========================
void bispo(int casas) {

    if (casas == 0) {
        return;
    }

    // Loop externo (vertical)
    for (int i = 0; i < 1; i++) {

        printf("Cima\n");

        // Loop interno (horizontal)
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }

    bispo(casas - 1);
}

// ==========================
// Cavalo - Loops aninhados
// 2 Cima + 1 Direita
// ==========================
void cavalo() {

    int cima = 2;
    int direita = 1;

    // Movimento vertical
    for (int i = 0; i < cima; i++) {

        if (i == -1) {  // nunca acontece (só pra ter continue)
            continue;
        }

        printf("Cima\n");
    }

    // Movimento horizontal
    int j = 0;

    while (j < direita) {

        if (j > 10) {   // nunca acontece (só pra ter break)
            break;
        }

        printf("Direita\n");
        j++;
    }
}

int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Torre:\n");
    torre(casasTorre);

    printf("\nBispo:\n");
    bispo(casasBispo);

    printf("\nRainha:\n");
    rainha(casasRainha);

    printf("\nCavalo:\n");
    cavalo();

    return 0;
}
