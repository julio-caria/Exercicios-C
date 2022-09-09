// 4. Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    char letter[1];
    char vogal = {"a", "e", "i", "o", "u"};

    printf("Verificando se a letra é uma vogal ou consoante...\n");
    printf("Digite uma única letra: ");
    scanf("%s", &letter);

    if(letter == vogal) {
        printf("A letra digitada é uma vogal.");
    } else {
        printf("A letra inserida e uma consoante");
    }

    printf("\n\n");
    system("pause");

}