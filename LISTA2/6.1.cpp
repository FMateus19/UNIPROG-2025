/*A loja de eletrônicos TechMundo vende uma certa quantidade de smartphones e uma quantidade de
tablets a cada dia. Cada smartphone custa R$ 1000,00 e cada tablet custa R$ 1500,00. Ao final do dia,
o dono quer saber quanto arrecadou com a venda dos smartphones e dos tablets. Escreva um
programa que leia o número de smartphones e tablets vendidos em um dia e calcule o total
arrecadado..*/

#include <stdio.h> 
#include <stdlib.h>


int main()

{
	
float z; // Z é o valor arrecadado durante o dia;
int y1,x1;
float x=1000.00,y=1500.00; //X é o valor do Smartphone e Y é do Tablet.


          printf("Digite a quantidade de tablets vendidos ao longo do dia: ");
			scanf("%d",&y1);
			printf("Digite a quantidade de smartphones vendidos ao longo do dia: ");
			scanf("%d",&x1);
			
			z= y1*y + x1*x;
		printf("O total arrecadado foi de  :%.2f\n\n",z);
		
    


 system ("Pause");	
	return 0;
}

