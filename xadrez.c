#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // Mover a Torre 5 casas para a direita
    printf("Mover a Torre 5 casas para a direita:\n");
    for(int torre = 0; torre < 5; torre++) {
        printf("Direita\n"); // imprime a direção da Torre
    }
    printf("\n");

    // Mover o Bispo 5 casas para a diagonal
    printf("Mover o Bispo 5 casas para a diagonal:\n");
    int bispo = 0;
    do {
        printf("Cima, Direita\n"); // imprime a direção do Bispo
        bispo++;
    } while (bispo < 5); // condição para o movimento do Bispo
    printf("\n");
    
    // Mover a Rainha 8 casas para a esquerda
    printf("Mover a Rainha 8 casas para a esquerda:\n");
    int rainha = 0;
    while (rainha < 8) {
        printf("Esquerda\n"); // imprime a direção da Rainha
        rainha++;
    }
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
