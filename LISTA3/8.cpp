/*Faça um conversor de câmbio de reais/dólar/euro. O usuário deve informar inicialmente a cotação de cada
moeda em relação ao real. Depois apresente o seguinte menu:
a) Converter de Real para Euro
b) Converter de Real para Dólar
c) Converter de Euro para Dólar
d) Converter de Euro para Real
e) Converter de Dólar para Euro
f) Converter de Dólar para Real
 Leia o valor a ser convertido na moeda de origem e imprima na tela a quantidade na moeda destino..*/

#include <stdio.h> 
#include <stdlib.h>
int main()

{
	float Dolarreal,Euroreal,valor,convercao;
	int x;
	
	printf("Digite o cambio do Dolar (em relacao a 1 Real): ");
		scanf("%f", &Dolarreal);
	printf("Digite a cambio do Euro (em relacao a 1 Real): ");
		scanf("%f", &Euroreal);
	printf("\nEscolha uma opcao:\n");
	printf("1) Converter de Real para Euro\n");
	printf("2) Converter de Real para Dolar\n");
	printf("3) Converter de Euro para Dolar\n");
	printf("4) Converter de Euro para Real\n");
	printf("5) Converter de Dolar para Euro\n");
	printf("6) Converter de Dolar para Real\n");
	
	printf("Opcao: ");
		scanf("%d", &x);
		 
	printf("Digite o valor que deseja converter: ");
		scanf("%f", &valor);
	switch (x) {
		case 1:
				convercao = valor / Euroreal;
				printf("R$ %.2f equivalem a € %.2f\n",valor,convercao);	
				break;
		case 2:
				convercao = valor / Dolarreal;
				printf("R$ %.2f equivalem a US$ %.2f\n", valor,convercao);
				break;
		
		case 3: 
				convercao = (valor * Euroreal) / Dolarreal;
				printf("€ %.2f equivalem a US$ %.2f\n", valor,convercao);
				break;
		case 4:
				convercao = valor * Euroreal;
				printf("€ %.2f equivalem a R$ %.2f\n", valor,convercao);	
				break;
		case 5:
			
				convercao = (valor * Dolarreal) / Euroreal;
				printf("US$ %.2f equivalem a € %.2f\n", valor, convercao);
				break;
		case 6:
			
				convercao = valor * Dolarreal;
				printf("US$ %.2f equivalem a R$ %.2f\n", valor,convercao);
				break;
		default:
				printf("Opcao invalida!\n"); }
			
			system ("Pause");	
	return 0;	
}

