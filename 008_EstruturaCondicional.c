// 8. Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    double produto1,
        produto2,
        produto3;

    
    printf("Verificando Qual produto sai mais em conta e compensa ser comprado...\n");
    printf("Informe o valor do primeiro produto: ");
    scanf("%lf", &produto1);
    
    printf("Informe o valor do segundo produto: ");
    scanf("%lf", &produto2);

    printf("Informe o valor do terceiro produto: ");
    scanf("%lf", &produto3);

    printf("\n\n");
    system("pause");
}