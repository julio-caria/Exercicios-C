/* Lista de Exerc�cios - Algoritmos e Pr�ticas de Programa��o */

/* Exerc�cio 1 - A e B */

/* a) Algoritmo (conjunto passos) para calcular a idade de uma pessoa, ap�s ela informar seu ano de nascimento e o ano atual. */

#include<stdio.h>
int ano_atual, 
	ano_nasc,
	idade;
	
main(){
	scanf("%d", &ano_atual);
	scanf("%d", ano_nasc); 	
	idade = ano_atual - ano_nasc;
	printff("%d", idade);
}



