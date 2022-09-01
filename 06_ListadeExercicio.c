//7)	Faça um programa para calcular o IMC de uma pessoa (índice de massa corpórea).
// IMC = peso / (altura x altura).
//https://www.tuasaude.com/calculadora/imc/


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    double altura,
        peso,
        imc;

    printf("Calculando o IMC(Indice de massa corporal)...\n");
    printf("Digite seu peso: ");
    scanf("%lf", &peso);

    printf("Digite sua altura: ");
    scanf("%lf", &altura);

    imc = peso/pow(altura, 2);
    printf("O IMC para quem pesa %.2lfkg e tem %.2lfm de altura e de %.2lfkg/m quadrado.", peso, altura, imc);

    printf("\n\n");
    system("pause");
}