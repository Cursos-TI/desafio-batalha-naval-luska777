#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main(){

    int tabuleiro [LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = 0;
            }
        }

    tabuleiro [3][3] = 3;
    tabuleiro [3][4] = 3;
    tabuleiro [3][5] = 3;

    tabuleiro [5][8] = 3;
    tabuleiro [6][8] = 3;
    tabuleiro [7][8] = 3;

    tabuleiro [4][2] = 3;
    tabuleiro [5][3] = 3;
    tabuleiro [6][4] = 3;

    tabuleiro [5][5] = 3;
    tabuleiro [4][6] = 3;

    printf("  A B C D E F G H I J \n");
    for (int i = 0; i < LINHAS; i++){
        printf("%d ", i);
         for(int j = 0; j < COLUNAS; j++) {
             printf("%d ", tabuleiro[i][j]);
             }
        printf("\n");

    }   
    
}