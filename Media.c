// Importando Livrarias 
#include<stdio.h> // Libera a possibilidade de Utilizar ccomandos como o printf() e scanf();
#include<stdlib.h> // Libera o uso do comando system();
#include<locale.h> // Libera acesso ao comando setLocale() para formatação das letras e acentuações.

// Inicio do Programa
main() { 
	// Serve para formatação de letras e acentuação
	setlocale(LC_ALL, "Portuguese"); 
	
	// Declaração de Variáveis
	double nota1, 
		   nota2, 
		   media;
	
	// Especificadores de Formato - Indicam que tipo de variável será lida: 
	// int(%d), float(%f), double(%lf), char(%c);
	printf("Digite a Primmeira Nota: \n");
	// scanf("Indica o tipo de variável que foi utilzada", &<nome da variável> - Para descobrir o local da variável na Memória RAM)
	scanf("%lf", &nota1); 
	
	printf("Digite a Segunda Nota: \n");
	scanf("%lf", &nota2);
	
	media = (nota1 + nota2) / 2;
	printf("A Média do aluno é: %lf\n\n", media);	
	
	// Estabilizando a tela do Programa.
	system("pause");
}
// Fim Do Programa