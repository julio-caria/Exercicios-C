//Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps),
//Calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    double tamanhoArquivo;
    int velocidadeInternet,
        tempoDownload;
    
    printf("Calculando o tempo aproximado do download de um arquivo...\n");
    printf("Informe a velocidade da sua internet (MB's): ");
    scanf("%d", &velocidadeInternet);

    printf("");
    scanf("");
}