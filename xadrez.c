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

    //Movimentação da Torre usando a estrutura de repetição for - 5 casas para a direita

    printf("Movimentação do tabuleiro de xadrez, peça - Torre.:\n\n");

    for(int i = 1; i <= 5; i++){
        printf("Direita\n");
    }

    //Movimentação do Bispo usando a estrutura de repetição while - 5 casas na diagonal direita

    printf("\nMovimentação do tabuleiro de xadrez, peça - Bispo.:\n\n");

    int j = 1;

    while(j <= 5){
        printf("Cima, Direita\n");
        j++;
    }

    //Movimentação da Rainha usando a estrutura de repetição do while - 8 casas para a esquerda

    printf("\nMovimentação do tabuleiro de xadrez, peça - Rainha.:\n\n");

    int l = 0;

    do{
        printf("Esquerda\n");
        l++;
    }while(l <= 7);

    return 0;
}
