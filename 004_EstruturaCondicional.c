// 4. Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

// Pesquisar Tabela Ascii
// https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    char letter;
    

    printf("\n\nVerificando se a letra e uma vogal ou consoante...\n");
    printf("Informe a letra que deseja consultar (Digite com caps-lock): ");
    scanf(" %c", &letter);


        if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
            printf("\nA letra informada e uma vogal.\n");
            printf("FIM DO SISTEMA...\n");
        } else {
            printf("\nA letra informada e uma consoante.\n");
            printf("FIM DO SISTEMA...\n");
        }

    // TESTE COM SWITCH CASE  
    // switch(letter){
	// 	case 'A':case 'E':case 'I':case 'O':case 'U':	
	// 		printf("\nA letra informada e uma vogal.\n");
	// 		break;
	// 	default:
	// 		printf("\nA letra informada e uma consoante.\n");
	// }
        

    printf("\n\n");
    system("pause");

}