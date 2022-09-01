/* Lista de Exercícios - Algoritmos e Práticas de Programação */

/* Exercício 1 - A e B */

/* a) Algoritmo (conjunto passos) para calcular a idade de uma pessoa, após ela informar seu ano de nascimento e o ano atual. */

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



