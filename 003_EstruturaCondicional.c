// 3. Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.

// Funções adicionais
// toLower() -> Converte para minúsculas
// toupper() -> Converte para maiúsculas

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<string.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    char sexo;
    char opcao[20];

    printf("\n\nVerificando o sexo do usuário...\n");
    printf("Escolha uma das opcoes abaixo de acordo com sexo que voce se identifica...\n\n");
    printf("M - Masculino;\n");
    printf("F - Feminino;\n");
    printf("O - Outro;\n");
    printf("P - Prefiro não dizer");
    printf("\n\n");
    printf("Insira a opcao: ");
    scanf(" %c", &sexo);

    if(toupper(sexo) == 'm') {
        printf("O Sexo escolhido foi: M - Masculino\n");
        printf("Deseja manter essa opcao?\n");
        printf("Digite SIM (S) para encerrar o programa ou NAO (N) para voltar as opcoes: ");
        scanf(" %c", opcao);

        while (toupper(opcao) != 'n'){
            printf("\n\nVerificando o sexo do usuário...\n");
            printf("Escolha uma das opcoes abaixo de acordo com sexo que voce se identifica...\n\n");
            printf("M - Masculino;\n");
            printf("F - Feminino;\n");
            printf("O - Outro;\n");
            printf("P - Prefiro não dizer\n");
            printf("\n");
            printf("Insira a opcao: ");
            scanf(" %c", &sexo);
        }

        printf("\n\nFIM DO SISTEMA...");
    } else if (toupper(sexo) == 'f') {
        printf("O Sexo escolhido foi: F - Feminino\n");
        printf("Deseja manter essa opcao?\n");
        printf("Digite SIM (S) para encerrar o programa ou NAO (N) para voltar as opcoes: ");
        scanf("%s", opcao);

        while (toupper(opcao) != 'N'){
            printf("\n\nVerificando o sexo do usuário...\n");
            printf("Escolha uma das opcoes abaixo de acordo com o seu sexo...\n\n");
            printf("M - Masculino;\n");
            printf("F - Feminino;\n");
            printf("O - Outro;\n");
            printf("P - Prefiro não dizer\n");
            printf("\n");
            printf("Insira a opcao: ");
            scanf("%s", &sexo);
        }

        printf("\n\nFIM DO SISTEMA...");
    } else if (toupper(sexo) == 'o') {

        printf("O Sexo escolhido foi: O - Outro\n");
        printf("Deseja manter essa opcao?\n");
        printf("Digite SIM (S) para encerrar o programa ou NAO (N) para voltar as opcoes: ");
        scanf(" %c", opcao);

        while (toupper(opcao) != 'n'){
            printf("\n\nVerificando o sexo do usuário...\n");
            printf("Escolha uma das opcoes abaixo de acordo com o seu sexo...\n\n");
            printf("M - Masculino;\n");
            printf("F - Feminino;\n");
            printf("O - Outro;\n");
            printf("P - Prefiro não dizer\n");
            printf("\n");
            printf("Insira a opcao: ");
            scanf(" %c", &sexo);
        }

        printf("\n\nFIM DO SISTEMA...");
    } else if (toupper(sexo) == 'p'){

        printf("O sexo escolhido foi: P - Prefiro não dizer\n");
        printf("Deseja manter essa opcao?\n");
        printf("Digite SIM (S) para encerrar o programa ou NAO (N) para voltar as opcoes: ");
        scanf(" %c", opcao);

        while (toupper(opcao) != 'n'){
            printf("\n\nVerificando o sexo do usuário...\n");
            printf("Escolha uma das opcoes abaixo de acordo com o seu sexo...\n\n");
            printf("M - Masculino;\n");
            printf("F - Feminino;\n");
            printf("O - Outro;\n");
            printf("P - Prefiro não dizer\n");
            printf("\n");
            printf("Insira a opcao: ");
            scanf(" %c", &sexo);
        }
    } else {
        printf("\nErro... Tente inserir uma opcao valida!\n");
        printf("\n\nVerificando o sexo do usuário...\n");
        printf("Escolha uma das opcoes abaixo de acordo com sexo que voce se identifica...\n\n");
        printf("M - Masculino;\n");
        printf("F - Feminino;\n");
        printf("O - Outro;\n");
        printf("P - Prefiro não dizer");
        printf("\n\n");
        printf("Insira a opcao: ");
        scanf(" %c", &sexo);
    }

    printf("\n\n");
    system("pause");
}