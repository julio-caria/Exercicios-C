//Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. 
//Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00. 
//Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


main() {
    setlocale(LC_ALL, "Portuguese");

    double area,
            capacidade,
            qtdLitros,
            valorLatas,
            qtdLatas;

    printf("Calculando o gasto de tinta por metro quadrado...\n");
    printf("Informe o metro quadrado que deverá ser pintado (m²): ");
    scanf("%lf", &area);

    // Uma lata de tinta pode pintar em até 54m²
    // A área deve ser dividida pela quantidade de metros que 1 litro consegue pintar
    qtdLitros = area/3; 
    // Uma lata tem a capacidade de 18 litros, se você precisa de 36 litros, logo são 2 latas.
    qtdLatas = qtdLitros/18;
    // Descobrindo o valor total que será gasto com as latas de tinta
    valorLatas = qtdLatas*80.00;

    printf("Considerando que cada lata de tinta tem a capacidade de 18 litros e que 1 litro tem pode pintar a cada 3 metros...\nUma unica lata consegue pintar 54m² custando R$80,00");
    printf("Sendo assim...\n");
    printf("Area: %.2lfm²\n", area);
    printf("Quantidade de Litros: %.0lfl\n", qtdLitros);
    printf("Quantidade de Latas: %lf latas", qtdLatas);
    printf("Total Gasto: R$.2%lf", valorLatas);
    printf("\n");
    printf("FIM DO SISTEMA...");


    printf("\n\n");
    system("pause");
}