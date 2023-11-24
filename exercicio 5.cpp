#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    char nome[200];
    int opcao, quantidade, total = 0, counter = 0;
    float precoUnitario, precoFinal;

    do {
        printf("|-----------Menu------------|\n");
        printf("|codigo | alternativas      |\n");
        printf("|1      | Nova venda        |\n");
        printf("|2      | Exibir compras    |\n");
        printf("|-----------Fim-------------|\n");

        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        system("cls || clear");

        switch (opcao) {
            case 1:
                printf("Digite o nome do produto: ");
                scanf("%s", nome);

                printf("Digite o preço do seu produto: ");
                scanf("%f", &precoUnitario);

                printf("Digite a quantidade do seu produto: ");
                scanf("%d", &quantidade);

                precoFinal = precoUnitario * quantidade;
                total += precoFinal;
                counter++;
                break;

            case 2:
                printf("Nomes dos produtos desejados: %s\n", nome);
                printf("Quantidades desejadas: %d\n", quantidade);
                printf("Total a pagar: R$%.2f\n", precoFinal);
                break;

            default:
                if (opcao != 1) {
                    printf("Opção inválida. Tente novamente.\n");
                }
        }
    } while (opcao == 1);

    return 0;
}
