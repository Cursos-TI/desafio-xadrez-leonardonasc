#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    int torre, bispo = 1, rainha = 1, cavaloi, cavaloy;
    // torre e rainha = frente | bispo: diagonal | cavalo: 2 frente e 1 lado

    // torre

    printf("##### TORRE #####\n");

    for (torre = 1; torre <= 5; torre++)
    {
        printf("Movendo a torre para frente %d casa(s)\n", torre);
    }

    printf("====================\n");

    printf("##### BISPO #####\n");

    // bispo
    while (bispo <= 5)
    {
        printf("Movendo o bispo para Cima\n");
        printf("Movendo o bispo para Esquerda\n");
        printf("Diagonal %d \n", bispo);
        bispo++;
    }

    printf("====================\n");

    // rainha

    printf("##### RAINHA #####\n");

    do
    {
        printf("Movendo a rainha para frente %d casa(s)\n", rainha);
        rainha++;

    } while (rainha <= 9);

    printf("====================\n");

    // cavalo

    printf("##### CAVALO #####\n");

    for (cavaloi = 1; cavaloi <= 1; cavaloi++)
    {
        for (cavaloy = 1; cavaloy <= 2; cavaloy++)
        {
            printf("Movendo o cavalo para frente\n");
        }
        printf("Movendo o cavalo para a esquerda\n");
    }

    printf("====================\n");

    return 0;
}
