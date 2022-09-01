//3)	Faça um Programa que converta metros para centímetros. 

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");

    double metros,
        centimetros;

    printf("Convertendo Metros em Centimetros\n");
    printf("Digite o valor em metros: ");
    scanf("%lf", &metros);

    centimetros = metros*100;
    printf("%.2lf metros em centimentros e: %.2lf", metros, centimetros);

    printf("\n\n");
    system("pause");

}