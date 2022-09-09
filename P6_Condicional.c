#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<String.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[30];
    int faltas;
    double nota1,
            nota2,
            nota3,
            media;
    
    printf("Verificando se o aluno será aprovado ou reprovado...\n");
    printf("Informe o nome do aluno: ");
    scanf("%s", &nome);

    printf("Informe a Primeira nota do aluno: ");
    scanf("%lf", &nota1);
    
    printf("Informe a Segunda nota do aluno: ");
    scanf("%lf", &nota2);

    printf("Informe a Terceira nota do aluno: ");
    scanf("%lf", &nota3);

    printf("Informe a quantidade de Faltas do aluno: ");
    scanf("%d", &faltas);

    media = (nota1 + nota2 + nota3)/3;
    if(media>=6 && faltas <= 20) {
        printf("O Aluno %s foi APROVADO com media %lf e com %d faltas.", nome, media, faltas);

    } else if(media < 6 && faltas > 20) {
        printf("O Aluno %s foi REPROVADO com media %lf e com %d faltas.", nome, media, faltas);
    } else if(faltas > 20) {
        printf("O Aluno %s foi REPROVADO com media %lf e com %d faltas, reprovado pois as faltas excederam o limite permitido.", nome, media, faltas);
    } else {
        printf("O Aluno %s foi REPROVADO com media %lf e com %d faltas, reprovado devido a media ser inferior a 6", nome, media, faltas);
    }

    printf("\n\n");
    system("pause");
}