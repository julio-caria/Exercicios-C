// 4)	Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


main() {

    setlocale(LC_ALL, "Portuguese");

    int horas;
    double salario_hora,
        salario_mes;


    printf("Calculando seu salário no mes diante a quantidade de horas\n");
    printf("Digite o seu salario por hora: ");
    scanf("%lf", &salario_hora);

    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%d", &horas);

    salario_mes = salario_hora*horas;

    printf("%dh trabalhadas no mes proporciona um salario de: R$%.2lf no fim do mes.", horas, salario_mes);

    printf("\n\n");
    system("pause");

}