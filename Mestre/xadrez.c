#include <stdio.h>

// torre e rainha = frente | bispo: diagonal | cavalo: 2 frente e 1 lado

void moverTorre(int casas)
{
    if (casas > 0) 
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas)
{
    if (casas > 0 && casas <= 5)
    {
        printf("Cima\n");
        printf("Esquerda\n");
        moverBispo(casas - 1);
    }
}

void moverCavalo(int cavalo)
{
    for (int i = 0; i < cavalo; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Movendo o cavalo para frente\n");
        }
        printf("Movendo o cavalo para a esquerda\n");
    }
}

void moverRainha(int casas)
{
    if (casas > 0 && casas <= 9)
    {
        printf("Direita\n");
        moverRainha(casas - 1);
    }
}

int main()
{

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("##### TORRE #####\n");
    moverTorre(5);
    printf("##### BISPO #####\n");
    moverBispo(5);
    printf("##### CAVALO #####\n");
    moverCavalo(2);
    printf("##### RAINHA #####\n");
    moverRainha(9);
    return 0;
}
