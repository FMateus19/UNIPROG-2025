/*Um usuário deseja converter a temperatura de Celsius para Fahrenheit. Escreva um programa que leia
a temperatura em Celsius e exiba a temperatura equivalente em Fahrenheit...*/

#include <stdio.h> 
#include <stdlib.h>


int main()

{
	
float y1,z; // Y1 é a quantidade de ração necessária por dia;




          printf("Digite a quantidade de temperatura em graus Celsius (C)  : ");
			scanf("%f",&y1);

			z= 1.8*y1+32;
		printf(" %.2f C Equivale a : %.2f F\n\n",y1,z);
		
    


 system ("Pause");	
	return 0;
}

