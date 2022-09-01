//8)	Faça um programa para graus celsius em graus fahrenheit. 

// Fórmula para transformar celsiu em fahrenheit:  Tc/5 = Tf -32/9
//https://brasilescola.uol.com.br/matematica/equacoes-matematicas-na-conversao-temperaturas.htm


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");

    int celsius,
        fahrenheit;

    printf("Transformando graus Celsius em Fahrenheit...\n");
    printf("Digite a temperatura em Graus Celcius: ");
    scanf("%d", &celsius);

    celsius/5 = (fahrenheit-32)/9;

    printf("Convertendo %dºC em fahrenheit temos: %dºF", celsius, fahrenheit);

    printf("\n\n");
    system("pause");

}