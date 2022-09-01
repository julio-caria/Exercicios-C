/* Lista de Exercícios - Algoritmos e Práticas de Programação */

/* Exercício 1 - B */

/* b) Algoritmo (conjunto passos) para calcular a área de um retângulo. O usuário informa o lado 1 e depois o lado 2. */

#include<stdio.h> /* Incluir uma biblioteca ao projeto */
/* Adicionando os comandos printf() e scanf() */
#include<stdlib.h> 
/* Importando comando system() */

char nome;

int nota1,
	nota2,
	media;
	
main() {
	printf("Digite o nome do aluno em quest�o: ");
	scanf("%s", nome)

	printf("Digite a Primeira Nota: ");
	scanf("%d", &nota1);

	printf("Digite a Segunda Nota: ");
	scanf("%d", &nota2);

	media = nota1 + nota2/2 ;
	printf("A Média do Aluno %s", nome, "é de: %d", media);
}

