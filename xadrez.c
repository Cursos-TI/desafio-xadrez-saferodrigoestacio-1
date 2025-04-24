#include <stdio.h>

// função para mover as torres de forma recursiva
void moverTorre(int casas) {

    if (casas > 0) {
        printf("Direita\n"); // imprime a direção da Torre
        moverTorre(casas - 1); // chamada recursiva para mover a Torre
    }

}

// função para mover o bispo de forma recursiva
void moverBispo(int casas) {

    if (casas > 0) {
        printf("Cima, Direita\n"); // imprime a direção do Bispo
        moverBispo(casas - 1); // chamada recursiva para mover o Bispo
    }

}

// função para mover a rainha de forma recursiva
void moverRainha(int casas) {

    if (casas > 0) {
        printf("Esquerda\n"); // imprime a direção da Rainha
        moverRainha(casas - 1); // chamada recursiva para mover a Rainha
    }

}

int main() {
    // Mover a Torre 5 casas para a direita
    printf("Mover a Torre 5 casas para a direita:\n");
    moverTorre(5); // chamada da função para mover a Torre
    printf("\n");

    // Mover o Bispo 5 casas para a diagonal
    printf("Mover o Bispo 5 casas para a diagonal:\n");
    moverBispo(5); // chamada da função para mover o Bispo
    printf("\n");
    
    // Mover a Rainha 8 casas para a esquerda
    printf("Mover a Rainha 8 casas para a esquerda:\n");
    moverRainha(8); // chamada da função para mover a Rainha
    printf("\n");

    // Mover o Cavalo 2 casas para baixo e 1 para a esquerda (formato em L)
    printf("Mover o Cavalo 2 casas para baixo e 1 para a esquerda (formato em L):\n");
    for(int movimento = 1; movimento > 0; movimento--) {

        int cavalo = 1;
        while (cavalo <= 2) {
            printf("Baixo\n"); // imprime a direção do Cavalo
            cavalo++;
        }

        printf("Esquerda\n"); // imprime a direção do Cavalo
    }
    printf("\n");

    return 0;
}
