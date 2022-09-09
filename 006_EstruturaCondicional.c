// 6. Faça um Programa que leia três números e mostre o maior deles.

// https://www.tutorialspoint.com/learn_c_by_examples/compare_three_integers_in_c.htm#:~:text=Comparing%20three%20integer%20variables%20is,program%20for%20you%20as%20well.


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int number1,
    number2,
    number3;

main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\nVerificando qual numero e maior entre 3 numeros...\n");
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
        printf("\nO Maior numero entre %i %i e %i e o: %i\n", number1, number2, number3, number1);
        printf("FIM DO SISTEMA...\n");
    } else if(number2 > number1 && number2 > number3) {
        printf("\nO Maior numetro entre %i %i e %i e o: %i\n", number1, number2, number3 , number2);
        printf("FIM DO SISTEMA...\n");
    } else if(number3 > number2 && number3 > number1) {
        printf("\nO Maior numero entre %i %i e %i e o: %i\n", number1, number2, number3, number3);
        printf("FIM DO SISTEMA...\n");
    }
    else if(number1 == number2 || number2 == number1) {
        printf("\nO numero %i e igual ao numero %i\n", number1, number2);
        printf("FIM DO SISTEMA...\n");
    } else if(number1 == number3 || number3 == number1) {
        printf("\nO numero %i e igual ao numero %i\n", number1, number3);
        printf("FIM DO SISTEMA...\n");
    } else if (number2 == number3 || number3 == number2) {
        printf("\nO numero %i e igual ao numero %i\n", number2, number3);
        printf("FIM DO SISTEMA...\n");
    } else if (number1 == number2 && number1 == number3){
        printf("Todos os numeros sao iguais...");
        printf("FIM DO SISTEMA...\n");
    }

    printf("\n");
    system("pause");
}