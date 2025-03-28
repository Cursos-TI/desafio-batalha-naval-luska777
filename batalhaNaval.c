#include <stdio.h>

int main (){

    int linhas=11;
    int colunas=11;
    int tabuleiro[linhas][colunas];

    for (int i = 1; i < linhas; i++){
        for (int j = 1; j < colunas; j++){
            tabuleiro [i][j] = 0;
        }
    }

    tabuleiro [3][3] = 3;
    tabuleiro [3][4] = 3;
    tabuleiro [3][5] = 3;

    tabuleiro [5][8] = 3;
    tabuleiro [6][8] = 3;
    tabuleiro [7][8] = 3;
    
    printf("  A B C D E F G H I J \n");
    for (int i = 1; i < linhas; i++){
        printf("%d ", i);
    for(int j = 1; j < colunas; j++) {
        printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}