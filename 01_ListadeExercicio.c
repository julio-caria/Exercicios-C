//2)	Faça um Programa que peça dois números e imprima a soma.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    int a,
        b,
        resultado;

    setlocale(LC_ALL, "Portuguese");

    printf("Programa para Calcular a soma entre dois valores.\n");
    printf("Digite o primero valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    resultado = a + b;

    printf("A Soma entre os valores %d e %d e igual a %d", a, b, resultado);
    
    printf("\n\n");
    system("pause");


}