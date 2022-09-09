// 3. Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.

// Funções adicionais
// #include<ctype.h> // toLower() e toupper()
// toLower() -> Converte para minúsculas
// toupper() -> Converte para maiúsculas

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    char sexo;
    char opcao;

    printf("\n\nVerificando o sexo do usuário...\n");
    printf("Escolha uma das opcoes abaixo de acordo com sexo que voce se identifica...\n\n");
    printf("M - Masculino;\n");
    printf("F - Feminino;\n");
    printf("O - Outro;\n");
    printf("P - Prefiro não dizer");
    printf("\n\n");
    printf("Insira a opcao: ");
    scanf(" %c", &sexo);

    if(sexo == 'm' || sexo == 'M') {
        printf("O Sexo escolhido foi: M - Masculino\n");
        printf("Deseja manter essa opcao?\n");
        printf("Digite SIM (S) para encerrar o programa ou NAO (N) para voltar as opcoes: ");
        scanf(" %c", opcao);

        while (opcao != 'n' || opcao != 'N'){
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
    } else if (sexo == 'f' || sexo == 'F') {
        printf("O Sexo escolhido foi: F - Feminino\n");
        printf("Deseja manter essa opcao?\n");
        printf("Digite SIM (S) para encerrar o programa ou NAO (N) para voltar as opcoes: ");
        scanf("%s", opcao);

        while (opcao != 'n' || opcao != 'N'){
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
    } else if (sexo == 'o' || sexo == 'O') {

        printf("O Sexo escolhido foi: O - Outro\n");
        printf("Deseja manter essa opcao?\n");
        printf("Digite SIM (S) para encerrar o programa ou NAO (N) para voltar as opcoes: ");
        scanf(" %c", opcao);

        while (opcao != 'n' || opcao != 'N'){
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
    } else if (sexo == 'p' || sexo == 'P'){

        printf("O sexo escolhido foi: P - Prefiro não dizer\n");
        printf("Deseja manter essa opcao?\n");
        printf("Digite SIM (S) para encerrar o programa ou NAO (N) para voltar as opcoes: ");
        scanf(" %c", opcao);

        while (opcao != 'n' || opcao != 'N'){
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
        
        printf("FIM DO SISTEMA...\n");
    }

    printf("\n\n");
    system("pause");
}