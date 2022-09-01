#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    int horas,
        minutos,
        segundos,
        total;
    
    printf("Informe a duracao em Horas do evento: ");
    scanf("%d", &horas);

    printf("Informe a duracao em Minutos do evento: ");
    scanf("%d", &minutos);
    
    printf("Informe a duracao em Segundos do evento: ");
    scanf("%d", &segundos);

    total = (horas*3600) + (minutos*60) + segundos;

    printf("A Quantidade total em segundos e de: %d", total);

    printf("\n\n");
    system("pause");


}