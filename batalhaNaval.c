#include <stdio.h>

int main() {
    char linha[10] = { 'A','B','C','D','E','F','G','H','I','J' };
    char coluna[10] = { '0','1','2','3','4','5','6','7','8','9' };
    int tabuleiro[10][10]; // Matriz 10x10 para o tabuleiro
    int navio_horizontal[3] = {3, 3, 3}; // Navio horizontal
    int navio_horizontal_2[3] = {3, 3, 3}; // Navio horizontal 2
    int navio_vertical_2[3] = {3, 3, 3}; // Navio vertical 3
    int navio_vertical[3] = {3, 3, 3};   // Navio vertical


    printf("Bem-vindo ao jogo da Batalha Naval!\n");

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona o navio horizontalmente na linha 2, começando na coluna 4
    int linha_horizontal = 2, coluna_horizontal = 4;
    if (coluna_horizontal + 3 <= 10) { // Garante que cabe no tabuleiro
        for (int i = 0; i < 3; i++) {
            tabuleiro[linha_horizontal][coluna_horizontal + i] = navio_horizontal[i];
        }
    }
    // Posiciona o navio horizontalmente na linha 5, começando na coluna 1
    int linha_horizontal_2 = 5, coluna_horizontal_2 = 1;
    if (coluna_horizontal_2 + 3 <= 10) { // Garante que cabe no tabuleiro
        for (int i = 0; i < 3; i++) {
            tabuleiro[linha_horizontal_2][coluna_horizontal_2 + i] = navio_horizontal_2[i];
        }
    }
    // Posiciona o navio verticalmente na coluna 2, começando na linha 0
    int linha_vertical_2 = 0, coluna_vertical_2 = 2;
    if (linha_vertical_2 + 3 <= 10) { // Garante que cabe no tabuleiro
        for (int i = 0; i < 3; i++) {
            tabuleiro[linha_vertical_2 + i][coluna_vertical_2] = navio_vertical_2[i];
        }
    }
    

    // Posiciona o navio verticalmente na coluna 6, começando na linha 5
    int linha_vertical = 3, coluna_vertical = 8;
    if (linha_vertical + 3 <= 10) { // Garante que cabe no tabuleiro
        for (int i = 0; i < 3; i++) {
            tabuleiro[linha_vertical + i][coluna_vertical] = navio_vertical[i];
        }
    }

    // Exibe o tabuleiro atualizado
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]); // Imprime as letras das colunas
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%c  ", coluna[i]); // Imprime os números das linhas
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

