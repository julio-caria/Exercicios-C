// 1.Faça um Programa que peça dois números e imprima o maior deles.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    int number1,
        number2;

    printf("Verificando qual numero digitado e maior...\n");
    printf("Informe o primeiro numero: ");
    scanf("%d", &number1);

    printf("Informe o segundo numero: ");
    scanf("%d", &number2);

    if(number1 > number2) {
        printf("Entre %d e %d o maior numero e %d", number1, number2, number1);
    } else if (number1 < number2){
        printf("Entre %d e %d o maior número e %d", number1, number2, number2);
    } else {
        printf("Ambos os numeros sao iguais, portanto não ha um maior entre eles.");
    }

    printf("\n\n");
    system("pause");
}