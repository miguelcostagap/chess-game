#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Definir o tabuleiro de xadrez como uma matriz 2D
char board[8][8];

// Função para inicializar o tabuleiro de xadrez com peças
void boardInit() {
    // Preencha o tabuleiro com peças iniciais
    // Você pode definir as peças como 'P' (peão), 'R' (torre), 'N' (cavalo), 'B' (bispo), 'Q' (rainha) e 'K' (rei).
    // Use letras maiúsculas para peças brancas e letras minúsculas para peças pretas.

    // Exemplo de configuração inicial:
    // Peças brancas
    board[0][0] = 'R';
    board[0][1] = 'N';
    board[0][2] = 'B';
    board[0][3] = 'Q';
    board[0][4] = 'K';
    board[0][5] = 'B';
    board[0][6] = 'N';
    board[0][7] = 'R';

    for (int i = 0; i < 8; i++) {
        board[1][i] = 'P';
        board[6][i] = 'p';
    }

    // Preencha o restante do tabuleiro com espaços vazios
    for (int i = 2; i < 6; i++) {
        for (int j = 0; j < 8; j++) {
            board[i][j] = ' ';
        }
    }
}

// Função para exibir o tabuleiro
void showBoard() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    boardInit();
    showBoard();

    // Aqui você pode implementar a lógica do jogo, permitindo que os jogadores façam movimentos e verificando a validade dos movimentos.

    return 0;
}
