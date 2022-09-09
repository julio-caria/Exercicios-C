//2. Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    int number;

    printf("Verificando se o numero e positivo ou negativo...\n");
    printf("Informe um numero para ser verificado: ");
    scanf("%d", &number);

    if(number >= 0) {
        printf("O numero %d e positivo", number);
    } else {
        printf("O numero %d e negativo", number);
    }

    printf("\nFIM DO SISTEMA...");
    
    printf("\n\n");
    system("pause");
}