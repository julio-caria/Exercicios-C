// 10. Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N- Noturno. 
// Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    char turno,
         opcao;

    printf("\nEstudando em determinado turno...\n");
    printf("Turnos Listados: \n\n");
    printf("M - Matutino;\n");
    printf("V - Vespertino;\n");
    printf("N - Noturno;\n");
    printf("Informe o turno em que você estuda (Informe a resposta em caps-lock): ");
    scanf(" %c", &turno);

    switch(turno) {
        case 'M':
            printf("\nO turno escolhido foi: M - Matutino\n");
            printf("Deseja manter essa opcao? KEEP (K) or RESET (R)? ");
            scanf(" %c", &opcao);
            
            while (opcao == 'r' || opcao == 'R') {
                printf("\nEstudando em determinado turno...\n");
                printf("Turnos Listados: \n\n");
                printf("M - Matutino;\n");
                printf("V - Vespertino;\n");
                printf("N - Noturno;\n");
                printf("Informe o turno em que você estuda: ");
                scanf(" %c", &turno);
            }
            printf("\nFIM DO SISTEMA...\n");
            break;
        case 'V':
            printf("\nO turno escolhido foi: V - Vespertino\n");
            printf("Deseja manter essa opcao? KEEP (K) or RESET (R)? ");
            scanf(" %c", &opcao);

            while (opcao == 'r' || opcao == 'R') {
                printf("\nEstudando em determinado turno...\n");
                printf("Turnos Listados: \n\n");
                printf("M - Matutino;\n");
                printf("V - Vespertino;\n");
                printf("N - Noturno;\n");
                printf("Informe o turno em que você estuda: ");
                scanf(" %c", &turno);
            }
            printf("\nFIM DO SISTEMA...\n");
            break;
        case 'N':
            printf("\nO turno escolhido foi: N - Noturno\n");
            printf("Deseja manter essa opcao? KEEP (K) or RESET (R)? ");
            scanf(" %c", &opcao);

            while (opcao == 'r' || opcao == 'R') {
                printf("\nEstudando em determinado turno...\n");
                printf("Turnos Listados: \n\n");
                printf("M - Matutino;\n");
                printf("V - Vespertino;\n");
                printf("N - Noturno;\n");
                printf("Informe o turno em que você estuda: ");
                scanf(" %c", &turno);
            }
            printf("\nFIM DO SISTEMA...\n");
            break;
        default: 
            printf("\nErro... Opcao Invalida... Tente Novamente...\n");
            printf("SYSTEM SHUTDOWN...\n");
            break;
    }

    printf("\n\n");
    system("pause");
}