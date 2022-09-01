//5)	Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    double altura,
        formula;

    printf("Programa para calcular o peso ideal de acordo com a sua altura.\n");
    printf("Informe a sua Altura: ");
    scanf("%lf", &altura);

    formula = (72.7*altura)-58;
    printf("O Peso ideal para quem tem %.2lfm de altura e de: %.2lfkg", altura, formula);

    printf("\n\n");
    system("pause");
}