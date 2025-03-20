#include <stdio.h>
int main()
{
    int escolher_peca;

    do
    {

        // MENU INTERATIVO
        printf("==================================================\n");
        printf("♙ ♞ ♜ ♔    QUAL PEÇA DESEJA MOVER   ♙ ♞ ♜ ♔\n");
        printf("==================================================\n");
        printf("  [1] ♙  BISPO \n");
        printf("  [2] ♔  RAINHA \n");
        printf("  [3] ♜  TORRE \n");
        printf("  [4] ♞  CAVALO \n");
        printf("  [5] Sair do Jogo... \n");
        printf("👉 Escolha uma opção: ");
        scanf("%d", &escolher_peca);

        // Criando um switch case para o Menu interativo
        switch (escolher_peca)
        {
        case 1:
            printf("=====================================\n");
            printf("         ♙  BISPO ♙       \n");
            printf("=====================================\n");
            for (int mover_bispo = 1; mover_bispo <= 5; mover_bispo++) // Laço de repetição, ele vai parar quando o Bispo se "mover" 5 casas.
                printf("CIMA - DIREITA\n");
            break;
        case 2:
            printf("=====================================\\n");
            printf("         ♔  RAINHA  ♔       \n");
            printf("=====================================\\n");
            int mover_rainha = 1;
            while (mover_rainha <= 8) // Laço de repetição, ele vai parar quando a Rainha se "mover" 8 casas.
            {
                printf("ESQUERDA\n");
                mover_rainha++;
            }
            break;
        case 3:
            printf("=====================================\n");
            printf("         ♔  TORRE  ♔       \n");
            printf("=====================================\n");

            int mover_torre = 1;
            do
            {
                printf("DIREITA \n");
                mover_torre++;
            } while (mover_torre <= 5); // Laço de repetição, ele vai parar quando a Torre se "mover" 5 casas.

            break;
        case 4:
            int casas_cavalo = 1;
            int mover_horizontal = 1;
            int mover_vertical = 1;
            int mover_vertical2;
            /*MENU PARA INICIAR O MOVIMENTO DO CAVALO*/
            printf("=====================================\n");
            printf("         ♞  CAVALO  ♞       \n");
            printf("=====================================\n");
            printf("  [1] - PARA CIMA\n  [2] - PARA BAIXO\n  [3] - ESQUERDA\n  [4] - DIREITA \n");
            printf("👉 Escolha uma opção: ");
            scanf("%d", &mover_vertical);

            switch (mover_vertical)
            {
            case 1: // MOVIMENTAÇÃO DO CAVALO PARA CIMA!!!!
                printf("=====================================\n");
                printf("  [1] - ESQUERDA\n  [2] - DIREITA \n");
                printf("👉 Escolha uma opção: ");
                scanf("%d", &mover_horizontal);
                printf("==================================================\n");
                switch (mover_horizontal)
                {
                case 1: // APOS IR PARA CIMA, ELE VAI FAZER A MOVIMENTAÇÃO PARA A ESQUERDA!!!
                    for (mover_vertical = 1; mover_vertical <= casas_cavalo; mover_vertical++)
                    {
                        for (mover_horizontal = 1; mover_horizontal <= 2; mover_horizontal++)
                        {
                            printf("♞  SUBIU ♞\n");
                        }
                        printf("♞  ESQUERDA ♞\n");
                    }
                    break;
                case 2: // APOS IR PARA CIMA, ELE VAI FAZER A MOVIMENTAÇÃO PARA A DIREITA!!!
                    while (mover_vertical <= casas_cavalo)
                    {
                        while (mover_horizontal <= 3)
                        {
                            printf("♞  SUBIU ♞\n");
                            mover_horizontal++;
                        }
                        printf("♞  DIREITA ♞\n");
                        mover_vertical++;
                    }
                    break;
                default:
                    printf("OPÇÃO INVÁLIDA!!!\n");
                    break;
                }
                break;
            case 2: // MOVIMENTAÇÃO DO CAVALO PARA BAIXO!!!!
                printf("=====================================\n");
                printf("  [1] - ESQUERDA\n  [2] - DIREITA \n");
                printf("👉 Escolha uma opção: ");
                scanf("%d", &mover_horizontal);
                printf("==================================================\n");
                switch (mover_horizontal)
                {
                case 1: // APÓS IR PARA BAIXO, ELE VAI FAZER MOVIMENTAÇÃO PARA ESQUERDA!!!
                    for (mover_vertical = 1; mover_vertical <= casas_cavalo; mover_vertical++)
                    {
                        for (mover_horizontal = 1; mover_horizontal <= 2; mover_horizontal++)
                        {
                            printf("♞  DESCEU ♞\n");
                        }
                        printf("♞  ESQUERDA ♞\n");
                    }
                    break;
                case 2: // APÓS IR PARA BAIXO, ELE VAI FAZER MOVIMENTAÇÃO PARA DIREITA!!!
                    for (mover_vertical = 1; mover_vertical <= casas_cavalo; mover_vertical++)
                    {
                        for (mover_horizontal = 1; mover_horizontal <= 2; mover_horizontal++)
                        {
                            printf("♞  DESCEU ♞\n");
                        }
                        printf("♞  DIREITA ♞\n");
                    }
                default:
                    printf("OPÇÃO INVÁLIDA!!!\n");
                    break;
                }

                break;
            case 3: // MOVIMENTAÇÃO DO CAVALO PARA ESQUERDA !!!
                printf("=====================================\n");
                printf("  [1] - PARA CIMA\n  [2] - PARA BAIXO \n");
                printf("👉 Escolha uma opção: ");
                scanf("%d", &mover_vertical2);
                printf("=====================================\n");
                switch (mover_vertical2)
                {
                case 1: // APÓS IR PARA ESQUERDA, ELE VAI FAZER MOVIMENTAÇÃO PARA CIMA !!!
                    for (mover_vertical = 1; mover_vertical <= casas_cavalo; mover_vertical++)
                    {
                        for (mover_horizontal = 1; mover_horizontal <= 2; mover_horizontal++)
                        {
                            printf("♞  ESQUERDA ♞\n");
                        }
                        printf("♞  CIMA ♞\n");
                    }

                    break;
                case 2: // APÓS IR PARA ESQUERDA, ELE VAI FAZER MOVIMENTAÇÃO PARA BAIXO !!!
                    for (mover_vertical = 1; mover_vertical <= casas_cavalo; mover_vertical++)
                    {
                        for (mover_horizontal = 1; mover_horizontal <= 2; mover_horizontal++)
                        {
                            printf("♞  ESQUERDA ♞\n");
                        }
                        printf("♞  DESCEU ♞\n");
                    }
                    break;
                default:
                    printf("OPÇÃO INVÁLIDA!!!\n");
                    break;
                }
                break;
            case 4: // MOVIMENTAÇÃO DO CAVALO PARA DIREITA !!!
                printf("=====================================\n");
                printf("  [1] - PARA CIMA\n  [2] - PARA BAIXO \n");
                printf("👉 Escolha uma opção: ");
                scanf("%d", &mover_vertical2);
                printf("=====================================\n");
                switch (mover_vertical2)
                {
                case 1: // APÓS IR PARA DIREITA, ELE VAI FAZER MOVIMENTAÇÃO PARA CIMA !!!
                    for (mover_vertical = 1; mover_vertical <= casas_cavalo; mover_vertical++)
                    {
                        for (mover_horizontal = 1; mover_horizontal <= 2; mover_horizontal++)
                        {
                            printf("♞  DIREITA ♞\n");
                        }
                        printf("♞  CIMA ♞\n");
                    }
                    break;
                case 2: // APÓS IR PARA DIREITA, ELE VAI FAZER MOVIMENTAÇÃO PARA BAIXO !!!
                    for (mover_vertical = 1; mover_vertical <= casas_cavalo; mover_vertical++)
                    {
                        for (mover_horizontal = 1; mover_horizontal <= 2; mover_horizontal++)
                        {
                            printf("♞  DIREITA ♞\n");
                        }
                        printf("♞  DESCEU ♞\n");
                    }
                    break;
                default:
                    printf("OPÇÃO INVÁLIDA!!!\n");
                    break;
                }
            }
            break;
        case 5: // Quando o usuario selecionar 5, vai sair do laço de repetição e terminar o programa.
            printf("=====================================\n");
            printf("♙ ♞ ♜ ♔     Saindo...  ♙ ♞ ♜ ♔\n");
            printf("=====================================\n");
            break;
        default:
            printf("OPÇÃO INVÁLIDA!!!\n");
            break;
        }
    } while (escolher_peca != 5);
    return 0;
}
