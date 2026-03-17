#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    int torre, bispo = 1, rainha = 1;
    // torre e rainha = frente | bispo: diagonal

    // torre
    for (torre = 1; torre <= 5; torre++)
    {
        printf("Movendo a torre para frente %d casa(s)\n", torre);

        if (torre == 5)
        {
            printf("====================\n");
        }
    }

    // bispo
    while (bispo <= 5)
    {
        printf("Movendo o bispo para Cima\n");
        printf("Movendo o bispo para Esquerda\n");
        printf("Diagonal %d \n", bispo);
        bispo++;

        if (bispo == 6)
        {
            printf("====================\n");
        }
    }

    // rainha

    do
    {
        printf("Movendo a rainha para frente %d casa(s)\n", rainha);
        rainha++;

    } while (rainha <= 9);

    return 0;
}
