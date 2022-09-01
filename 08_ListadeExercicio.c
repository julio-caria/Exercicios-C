//9)	Faça um programa para calcular os rendimentos de uma aplicação. O usuário digita o valor investido e também a taxa de rendimento. O sistema calcula e informa os rendimentos obtidos no mês.
//Valor aplicado: R$ 2000,00
//Taxa de rendimento ao mês:  2%
//Lucro por mês: R$ 400,00


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");

    int txRendimento;
    double valorInvestido,
            rendimentoMensal;

    printf("Calculando os rendimentos de uma aplicacao...\n");
    printf("Informe o valor investido: ");
    scanf("%lf", &valorInvestido);

    printf("Digite a porcentagem da taxa (%%): ");
    scanf("%d", &txRendimento);

    rendimentoMensal = valorInvestido * txRendimento/100; 

    printf("Tendo R$%.2lf como valor investido e com uma taxa de rendimento de %d%%, tem-se o rendimento de R$%.2lf ao mes.", valorInvestido, txRendimento, rendimentoMensal);

    printf("\n\n");
    system("pause"); 

}