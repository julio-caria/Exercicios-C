#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h> // pow(), sqrt()

main() {

    setlocale(LC_ALL, "Portuguese");

    double a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%lf", &a);

    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    delta = pow(b, 2) - 4*a*c; // pow() -> Exponenciação

    x1 = (-b+sqrt(delta))/(2*a); //sqrt() -> Raíz quadrada
    x2 = (-b-sqrt(delta))/(2*a);

    printf("Delta= %.2lf, x1= %.2lf, x2= %.2lf", delta, x1, x2);
    
    printf("\n\n");
    system("pause");

}