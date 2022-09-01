//8)	Faça um programa para graus celsius em graus fahrenheit. 

// Fórmula para transformar celsiu em fahrenheit:  Tc/5 = Tf -32/9
//https://brasilescola.uol.com.br/matematica/equacoes-matematicas-na-conversao-temperaturas.htm


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {

    setlocale(LC_ALL, "Portuguese");

    double celsius,
        fahrenheit;

    printf("Transformando graus Celsius em Fahrenheit...\n");
    printf("Digite a temperatura em Graus Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = 1.8 * celsius + 32;

    printf("Convertendo %.1lfºC em fahrenheit temos: %.1lfºF", celsius, fahrenheit);

    printf("\n\n");
    system("pause");

}