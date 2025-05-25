#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Movimentação da Torre usando função recursiva
void MoverTorre(int i){
    if(i > 0){
        printf("Direita\n");
        MoverTorre (i- 1);
    }
} 

//Movimentação do Bispo usando função recursiva e loop aninhado
void MoverBispo(int n){
    for(int j = 0; j < n; j++){ //controla o movimento vertical
        printf("\nCima\n");
        for(int k = 0; k < 1; k++){//controla o movimento horizontal
            printf("Direita");
        }
        printf("\n");//pula uma linha
    }
}

//Movimentação da Rainha usando função recursiva
void MoverRainha(int l){
    if(l > 0){
        printf("Esquerda\n");
        MoverRainha (l - 1);
    }
}

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

    //Identificando e separando as movimentações das peças, e chamando as funções recursivas
    printf("Movimentação da Torre.:\n\n");
    MoverTorre(5);
    printf("\n------------------------------------------------------------\n");
    printf("\nMovimentação do Bispo.:\n");
    MoverBispo(5);
    printf("\n------------------------------------------------------------\n");
    printf("\nMovimentação da Rainha.:\n\n");
    MoverRainha(8);
    
    //Movimentação do Cavalo usando loop aninhado - 2 casas para cima e 1 para a direita

    printf("\n------------------------------------------------------------\n");
    printf("\nMovimentação do Cavalo.:\n\n");

    int MovimentoCavalo = 1;

    do{
        for(int l = 0; l < 2; l++){
            printf("Cima\n");
        }
        printf("Direita\n");
        MovimentoCavalo--;
    }while(MovimentoCavalo > 0);

    return 0;
}
