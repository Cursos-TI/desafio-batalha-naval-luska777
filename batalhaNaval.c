#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10

int main() {
    int tabuleiro[LINHAS][COLUNAS];

    // Inicializar o tabuleiro com água (0)
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Imprimir o tabuleiro
    printf("  A B C D E F G H I J \n");
    for (int i = 0; i < LINHAS; i++) {
        printf("%d ", i);
        for (int j = 0; j < COLUNAS; j++) {
            // Condição para imprimir a cruz
            if ((i >= 1 && i <= 3 && j == 2) || (j >= 1 && j <= 3 && i == 2)) {
                printf("1 "); // Imprimir tiro
            }


            // Condição para imprimir o triângulo
            else if (i == 7 && j == 7) {
                printf("1 "); // Imprimir tiro
            } else if (i == 8 && j >= 6 && j <= 8) {
                printf("1 "); // Imprimir tiro
            } else if (i == 9 && j >= 5 && j <= 9) {
                printf("1 "); // Imprimir tiro
            }


            // Condição para imprimir o losango
            else if (i == 1 && j == 7) {
                printf("1 "); // Imprimir tiro
            } else if (i == 2 && j >= 6 && j <= 8) {
                printf("1 "); // Imprimir tiro
            } else if (i == 3 && j >= 5 && j <= 9) {
                printf("1 "); // Imprimir tiro
            } else if (i == 4 && j >= 6 && j <= 8) {
                printf("1 "); // Imprimir tiro
            } else if (i == 5 && j == 7) {
                printf("1 "); // Imprimir tiro
            } else {
                printf("%d ", tabuleiro[i][j]); // Imprimir água
            }
        }
        printf("\n");
    }

    return 0;
}