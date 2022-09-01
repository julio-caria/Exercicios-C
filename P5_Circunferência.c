
#define PI 3.14159
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>


main() {

    setlocale(LC_ALL, "Portuguese");

    double raio,
            area;

    printf("Calculando a área de uma circunferencia\n");
    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    area = PI * pow(raio,2);

    printf("A area da Circunferencia e de: %.2lf cm²", area);

    printf("\n\n");
    system("pause");


}