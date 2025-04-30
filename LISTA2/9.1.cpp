/*Durante uma liquidação uma loja resolveu dar quinze por cento de desconto nas compras feitas pelos
clientes. Faça um programa que leia o valor da compra e escreva o valor da compra com o desconto..*/

#include <stdio.h> 
#include <stdlib.h>


int main()

{
	
float y1,z; // Y1 é a quantidade de ração necessária por dia;




          printf("Digite o valor da compra (R$) : ");
			scanf("%f",&y1);

			z= y1-y1*0.15;
		printf(" O Valor a pagar sera : %.2f R$ \n\n",z);
		
    


 system ("Pause");	
	return 0;
}

