// 10)	Faça um Programa que pergunte quanto você ganha por hora e o número de
// horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido
// mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o
// INSS e 5% para o sindicato, faça um programa que nos dê: a.	salário bruto.
// b.	quanto pagou ao INSS.
// c.	quanto pagou ao sindicato.
// d.	o salário líquido.
// e.	calcule os descontos e o salário líquido, conforme a tabela abaixo:
// f.	+ Salário Bruto : R$
// g.	- IR (11%) : R$
// h.	- INSS (8%) : R$
// i.	- Sindicato ( 5%) : R$
// j.	= Salário Liquido : R$
// Obs.: Salário Bruto - Descontos = Salário Líquido.

#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

main() {
  setlocale(LC_ALL, "Portuguese");

  double salarioBruto, txSindicato, hrsTrabalhadas, ganhoPhr, txInss,
      impostoRenda, salarioLiquido, descontos;

  printf("Calculando seu rendimento mensal...\n");
  printf("Informe o ganho por hora trabalhada: ");
  scanf("%lf", &ganhoPhr);

  printf("Informe as horas que você trabalha no mês: ");
  scanf("%lf", &hrsTrabalhadas);

  salarioBruto = ganhoPhr * hrsTrabalhadas;
  printf("Seu salário trabalhando %.0lfh ganhando R$%.2lf/h é de R$%.2lf",
         hrsTrabalhadas, ganhoPhr, salarioBruto);

  impostoRenda = (salarioBruto * 11) / 100;
  txInss = (salarioBruto * 8) / 100;
  txSindicato = (salarioBruto * 5) / 100;

  descontos = impostoRenda + txInss + txSindicato;
  salarioLiquido = salarioBruto - descontos;
  printf("\n\nPor fim as contas ficaram da seguinte forma:\n(+) Salário Bruto: "
         "R$%.2lf\n(-) IR - Imposto de Renda (11%): R$%.2lf\n(-) Taxa INSS "
         "(5%): R$%.2lf\n(-) Taxa do Sindicato (5%): R$%.2lf\n(=) Salário "
         "Líquido: R$%.2lf",
         salarioBruto, impostoRenda, txInss, txSindicato, salarioLiquido);

  printf("\n\n");
  system("pause");
}