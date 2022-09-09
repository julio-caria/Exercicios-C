// 3. Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    char sexo;
    char opcao[20];

    printf("\n\nVerificando o sexo do usuário...\n");
    printf("Escolha uma das opcoes abaixo de acordo com sexo que voce se identifica...\n\n");
    printf("M - Masculino;\n");
    printf("F - Feminino;\n");
    printf("O - Outro;");
    printf("\n\n");
    printf("Insira a opcao: ");
    scanf(" %c", &sexo);

    if(sexo == 'M') {
        printf("O Sexo escolhido foi: M - Masculino\n");
        printf("Deseja manter essa opcao?\n");
        printf("Digite SIM (S) para encerrar o programa ou NAO (N) para voltar as opcoes: ");
        scanf(" %c", opcao);

        while (opcao != 'N'){
            printf("\n\nVerificando o sexo do usuário...\n");
            printf("Escolha uma das opcoes abaixo de acordo com sexo que voce se identifica...\n\n");
            printf("M - Masculino;");
            printf("F - Feminino;");
            printf("O - Outro;");
            printf("\n");
            printf("Insira a opcao: ");
            scanf(" %c", &sexo);
        }

        printf("\n\nFIM DO SISTEMA...");
    } else if (sexo == 'F') {
        printf("O Sexo escolhido foi: F - Feminino\n");
        printf("Deseja manter essa opcao?\n");
        printf("Digite SIM (S) para encerrar o programa ou NAO (N) para voltar as opcoes: ");
        scanf("%s", opcao);

        while (opcao != 'N'){
            printf("\n\nVerificando o sexo do usuário...\n");
            printf("Escolha uma das opcoes abaixo de acordo com o seu sexo...\n\n");
            printf("M - Masculino;");
            printf("F - Feminino;");
            printf("O - Outro;");
            printf("\n");
            printf("Insira a opcao: ");
            scanf("%s", &sexo);
        }

        printf("\n\nFIM DO SISTEMA...");
    } else if (sexo == "O") {

        char outroSexo[10];

        printf("O Sexo escolhido foi: O - Outro\n");
        printf("Como marcou OUTRO, informe o sexo com o qual se identifica: ");
        scanf("%s", &outroSexo);
        printf("Deseja manter essa opcao?\n");
        printf("Digite SIM (S) para encerrar o programa ou NAO (N) para voltar as opcoes: ");
        scanf(" %c", opcao);

        while (opcao != 'N'){
            printf("\n\nVerificando o sexo do usuário...\n");
            printf("Escolha uma das opcoes abaixo de acordo com o seu sexo...\n\n");
            printf("M - Masculino;");
            printf("F - Feminino;");
            printf("O - Outro;");
            printf("\n");
            printf("Insira a opcao: ");
            scanf(" %c", &sexo);
        }

        printf("\n\nFIM DO SISTEMA...");
    }

    printf("\n\n");
    system("pause");
}