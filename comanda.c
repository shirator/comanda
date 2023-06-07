#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int opcao_desejada() {
    int opcao;

    printf("1 - Incluir item\n2 - Fechar comanda\n3 - Nova comanda\n");
    printf("\nDigite a opcao desejada: \n");
    scanf("%i", &opcao);

    return opcao;
}

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float valor_unitario, quantidade, total;
    char produto[50] = "";

    printf("Seja bem vindo! \n");
    opcao = opcao_desejada();

    while(opcao == 1) {
        system("cls");
        printf("Qual o nome do produto? \n");
        scanf("%s", &produto);
        printf("Qual o valor unitario? \n");
        scanf("%f", &valor_unitario);
        printf("Qual a quantidade? \n");
        scanf("%f", &quantidade);

        total += valor_unitario * quantidade;

        system("cls");
        printf("Produto: %s\nValor: %.2f R$\nQuantidade: %.2f KG\n", produto, valor_unitario, quantidade);
        printf("Total da compra: %.2f \n\n", total);

        opcao = opcao_desejada();
    }

    if(opcao == 2) {
        float dinheiro, troco;

        system("cls");
        printf("O valor total e %.2f R$\n", total);
        printf("Insira o dinheiro pago: \n");
        scanf("%f", &dinheiro);
        troco = dinheiro - total;
        printf("Seu troco sera de %.2f R$\n", troco);
    }

    else if(opcao == 3) {
        total = 0;
        system("cls");
        printf("Seja bem vindo! \n");
        opcao = opcao_desejada();
    }

}