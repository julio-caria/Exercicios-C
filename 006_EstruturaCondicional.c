// 6. Faça um Programa que leia três números e mostre o maior deles.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int number1,
    number2,
    number3;

main() {
    setlocale(LC_ALL, "Portuguese");

    
    
    printf("Verificando qual numero e maior entre 3 numeros...\n");
    printf("Informe o primeiro valor: ");
    scanf("%i", &number1);

    printf("Informe o segundo valor: ");
    scanf("%i", &number2);

    printf("Informe o terceiro valor: ");
    scanf("%i", &number3);

    biggestNumber();
    return 0;
}

biggestNumber() {
    if(number1 > number2 && number1 > number3) {
        printf("O Maior numero entre %i %i e %i e o: %i", number1, number2, number3, number1);
    } else if(number1 == number2 || number2 == number1) {
        printf("O numero %i e igual ao numero %i", number1, number2);
    } else if(number1 == number3 || number3 == number1) {
        printf("O numero %i e igual ao numero %i", number1, number3);
    } else if (number2 == number3 || number3 == number2) {
        printf("O numero %i e igual ao numero %i", number2, number3);
    }
}