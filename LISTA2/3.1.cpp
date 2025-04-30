/*Um restaurante de buffet a quilo cobra R$ 40,00 por quilo. Escreva um programa que leia o peso do
prato do cliente e calcule o valor a ser pago.*/

#include <stdio.h> 
#include <stdlib.h>


int main()

{
float peso_por_kilo=40.00, pesodoprato,valor_a_pagar;

          printf("Digite o peso do prato: ");
			scanf("%f", &pesodoprato);
		
		

        valor_a_pagar = peso_por_kilo*pesodoprato;

printf("O Valor a pagar  e: R$ %.2f\n", valor_a_pagar);

 system ("Pause");	
	return 0;
}

