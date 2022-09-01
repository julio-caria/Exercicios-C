#include<stdio.h>  //printf(), scanf()
#include<stdlib.h> //system()
#include<locale.h> //setlocale()

main(){ //inicio
	setlocale(LC_ALL,"Portuguese");
	//Declaração de variáveis
	//int-%d, float-%f, double-%lf, char-%c
	int idade1, idade2, soma;	
	printf("Digite a idade 1: ");
	scanf("%d",&idade1);	
	printf("Digite a idade 2: ");
	scanf("%d",&idade2);	
	soma = idade1 + idade2; 	
	printf("A soma é %d",soma);	
	printf("\n\n");
	system("pause");
} //fim