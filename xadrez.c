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
    printf("  [5] 🚪 SAIR DO JOGO\n\n");
    printf("==============================================\n");
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
    for (int bispo = 1; bispo <= 5; bispo++)
    {
        for (int bispo = 1; bispo <= 1; bispo++)
        {
            printf("♙  SUBIU -");
        }
        printf(" DIREITA ♙\n");
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
    for (int mover_vertical = 2; mover_vertical <= 2; mover_vertical++)
    {
        for (int mover_horizontal = 0; mover_horizontal <= 1; mover_horizontal++)
        {
            printf("♞  SUBIU ♞\n");
        }
        printf("♞  DIREITA ♞\n");
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
