/* Lista de Exerc�cios - Algoritmos e Pr�ticas de Programa��o */

/* Exerc�cio 1 - B */

/* b) Algoritmo (conjunto passos) para calcular a �rea de um ret�ngulo. O usu�rio informa o lado 1 e depois o lado 2. */

#include<stdio.h>

int lado1,
	lado2,
	area;
	
main() {
	scanf("%d", &lado1);
	scanf("%d", &lado2);
	area = lado1 * lado2;
	printf("%d", area);
}
