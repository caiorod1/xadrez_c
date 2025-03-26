#include <stdio.h>

void exibirMenu()
{
    printf("==================================================\n");
    printf("♙ ♞ ♜ ♔    QUAL PEÇA DESEJA MOVER   ♙ ♞ ♜ ♔\n");
    printf("==================================================\n");
    printf("  [1] ♙  BISPO \n");
    printf("  [2] ♔  RAINHA \n");
    printf("  [3] ♜  TORRE \n");
    printf("  [4] ♞  CAVALO \n");
    printf("  [5] 🚪 SAIR DO JOGO\n");
    printf("👉 Escolha uma opção: ");
}

void moverRainha(int rainha)
{
    if (rainha > 0)
    {
        printf("♔  SUBIU ♔\n");
        moverRainha(rainha - 1);
    }
}

void moverBispo()
{
    int opcao_bispo;
    int opcao_bispo2;
    printf("  [1] - DIAGONAL DIREITA\n  [2] - DIAGONAL ESQUERDA\n");
    printf("👉 Escolha uma opção: ");
    scanf("%d", &opcao_bispo);
    switch (opcao_bispo)
    {
    case 1:
        printf("==================================================\n");
        printf("  [1] - SUPERIOR\n  [2] - INFERIOR\n");
        printf("👉 Escolha uma opção: ");
        scanf("%d", &opcao_bispo2);
        switch (opcao_bispo2)
        {
        case 1:
            printf("==================================================\n");
            for (int bispo = 1; bispo <= 5; bispo++)
            {
                for (int bispo = 1; bispo <= 1; bispo++)
                {
                    printf("♙  SUBIU -");
                }
                printf(" DIREITA ♙\n");
            }
            break;
        case 2:
            printf("==================================================\n");
            for (int bispo = 1; bispo <= 5; bispo++)
            {
                for (int bispo = 1; bispo <= 1; bispo++)
                {
                    printf("♙  DESCEU -");
                }
                printf(" DIREITA ♙\n");
            }
            break;
        default:
            printf("OPÇÃO INVÁLIDA!!!\n");
            break;
        }
        break;
    case 2:
        printf("==================================================\n");
        printf("  [1] - SUPERIOR\n  [2] - INFERIOR\n");
        printf("👉 Escolha uma opção: ");
        scanf("%d", &opcao_bispo2);
        switch (opcao_bispo2)
        {
        case 1:
            printf("==================================================\n");
            for (int bispo = 1; bispo <= 5; bispo++)
            {
                for (int bispo = 1; bispo <= 1; bispo++)
                {
                    printf("♙  SUBIU -");
                }
                printf(" ESQUERDA ♙\n");
            }
            break;
        case 2:
            printf("==================================================\n");
            for (int bispo = 1; bispo <= 5; bispo++)
            {
                for (int bispo = 1; bispo <= 1; bispo++)
                {
                    printf("♙  DESCEU -");
                }
                printf(" ESQUERDA ♙\n");
            }
            break;
        default:
            printf("OPÇÃO INVÁLIDA!!!\n");
            break;
        }
        break;
    default:
        printf("OPÇÃO INVÁLIDA!!!\n");
        break;
    }
}

void moverTorre(int torre)
{
    do
    {
        printf("♔  DIREITA ♔\n");
        torre++;
    } while (torre <= 4); // Laço de repetição, ele vai parar quando a Torre se "mover" 5 casas.
}

void moverCavalo()
{
    int mover_horizontal = 1;
    int mover_vertical = 1;
    int mover_vertical2;
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
            for (mover_vertical = 1; mover_vertical <= 1; mover_vertical++)
            {
                for (mover_horizontal = 1; mover_horizontal <= 2; mover_horizontal++)
                {
                    printf("♞  SUBIU ♞\n");
                }
                printf("♞  ESQUERDA ♞\n");
            }
            break;
        case 2: // APOS IR PARA CIMA, ELE VAI FAZER A MOVIMENTAÇÃO PARA A DIREITA!!!
            while (mover_vertical <= 1)
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
            for (mover_vertical = 1; mover_vertical <= 1; mover_vertical++)
            {
                for (mover_horizontal = 1; mover_horizontal <= 2; mover_horizontal++)
                {
                    printf("♞  DESCEU ♞\n");
                }
                printf("♞  ESQUERDA ♞\n");
            }
            break;
        case 2: // APÓS IR PARA BAIXO, ELE VAI FAZER MOVIMENTAÇÃO PARA DIREITA!!!
            for (mover_vertical = 1; mover_vertical <= 1; mover_vertical++)
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
            for (mover_vertical = 1; mover_vertical <= 1; mover_vertical++)
            {
                for (mover_horizontal = 1; mover_horizontal <= 2; mover_horizontal++)
                {
                    printf("♞  ESQUERDA ♞\n");
                }
                printf("♞  CIMA ♞\n");
            }

            break;
        case 2: // APÓS IR PARA ESQUERDA, ELE VAI FAZER MOVIMENTAÇÃO PARA BAIXO !!!
            for (mover_vertical = 1; mover_vertical <= 1; mover_vertical++)
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
            for (mover_vertical = 1; mover_vertical <= 1; mover_vertical++)
            {
                for (mover_horizontal = 1; mover_horizontal <= 2; mover_horizontal++)
                {
                    printf("♞  DIREITA ♞\n");
                }
                printf("♞  CIMA ♞\n");
            }
            break;
        case 2: // APÓS IR PARA DIREITA, ELE VAI FAZER MOVIMENTAÇÃO PARA BAIXO !!!
            for (mover_vertical = 1; mover_vertical <= 1; mover_vertical++)
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
        break;
    }
}

void Sair()
{
    printf("=====================================\n");
    printf("♙ ♞ ♜ ♔     Saindo...  ♙ ♞ ♜ ♔\n");
    printf("=====================================\n");
}

int main()
{

    int escolher_peca;

    do
    {
        // Menu
        exibirMenu(0);
        scanf("%d", &escolher_peca);

        // Criando um switch case para o Menu interativo
        switch (escolher_peca)
        {
        case 1:
            printf("=====================================\n");
            printf("         ♙  BISPO ♙       \n");
            printf("=====================================\n");

            moverBispo(0); // A função bispo, vai subir o BISPO em 5 casas diagonal.

            break;
        case 2:
            printf("=====================================\\n");
            printf("         ♔  RAINHA  ♔       \n");
            printf("=====================================\\n");

            moverRainha(6); // A função rainha, vai subir a RAINHA em 5 casas.

            break;
        case 3:
            printf("=====================================\n");
            printf("         ♔  TORRE  ♔       \n");
            printf("=====================================\n");

            moverTorre(0); // A função torre, vai mover a TORRE em 5 casas a direita.

            break;
        case 4:
            printf("=====================================\n");
            printf("         ♞  CAVALO  ♞       \n");
            printf("=====================================\n");

            moverCavalo(0); // A função cavalo, irá subir o CAVALO em formato de L.

            break;

        case 5: // Quando o usuario selecionar 5, vai sair do laço de repetição e terminar o programa
            Sair();
            break;

        default:
            printf("OPÇÃO INVÁLIDA!!!\n");
            break;
        }
    } while (escolher_peca != 5);

    return 0;
}
