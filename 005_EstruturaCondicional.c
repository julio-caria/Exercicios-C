// 5. Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar:
// A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
// A mensagem "Reprovado", se a média for menor do que sete;
// A mensagem "Aprovado com Distinção", se a média for igual a dez.


#include "stdio.h" 
#include "stdlib.h "
#include "locale.h"
#include "string.h"

main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    double nota1,
            nota2,
            media;
    
    printf("Calculando a media do aluno e verificando se foi APROVADO ou REPROVADO...\n");
    printf("Informe o nome do aluno: ");
    scanf("%s", &nome);

    printf("Informe a primeira nota do aluno: ");
    scanf("%lf", &nota1);
    printf("Informe a segunda nota do aluno: ");
    scanf("%lf", &nota2);

    media = (nota1+nota2)/2;
    if(media >= 7 && media <= 9.9) {
        printf("O aluno %s foi APROVADO para o proximo semestre, pois sua media foi de %.1lf.", nome, media);
    } else if (media >= 10){
        printf("O aluno %s foi APROVADO COM DISTINCAO  para o proximo semestre, pois sua media foi %.1lf, igual a 10.", nome, media);
    } else {
        printf("O Aluno %s foi REPROVADO, pois teve media %.1lf, ou seja, inferior ao requerido (7.0)");
    }

    printf("\n\n");
    system("pause");
}