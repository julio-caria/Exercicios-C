#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main() {

    setlocale(LC_ALL, "Portuguese");
    double km_rodado, tempo, velocidade_media;

    printf("Digite a duracao da viagem em horas: ");
    scanf("%lf", &tempo);

    printf("Digite a quilometragem da viagem: ");
    scanf("%lf", &km_rodado);

    printf("\nCalculando a velocidade media... Aguarde...");

    velocidade_media = km_rodado/tempo/3.6;
    printf("Sua velocidade media foi de: %.2lf km/h", velocidade_media);

    printf("\n\n");
    system("pause");

}