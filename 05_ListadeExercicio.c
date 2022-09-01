//6)	Faça um programa para calcular a área de um quadrado.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    int lado,
        area;

    printf("Calculando a area de um quadrado...\n");
    printf("Digite o lado do quadrado: ");
    scanf("%d", &lado);

    area = pow(lado,2);
    printf("Um quadrado com lado de %d tem uma area igual a %dcm quadrados", lado, area);

    printf("\n\n");
    system("pause");
}