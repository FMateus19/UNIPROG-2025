/*Faça um algoritmo que leia uma quantidade de tempo em minutos e escreva o tempo equivalente em
segundos na tela.*/

#include <stdio.h> 
#include <stdlib.h>


int main()
{

int  segundos,minutos;
		
		// 
		
		printf("Digite a quantidade de minutos :");
		scanf("%d",&minutos);
		
		segundos = 60*minutos;
		
		printf(" %d minutos  equivale a %d segundos \n\n",minutos,segundos);
			
 system ("Pause");	
	return 0;
}

