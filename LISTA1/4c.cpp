
/*Dados não precisam ser tão “quadrados”, ou cúbicos para ser mais exato. Faça um programa que simule
dados de 4, 6, 8, 10, 12 ou 16 faces (apenas estes valores). Peça para o usuário informar no começo do
programa quantas faces quer, para depois fazer o sorteio.....*/

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int main()

{
	int x, resultado;

		printf("Digite o numero de faces do dado (4, 6, 8, 10, 12 ouo 16)  :");
			scanf("%d",&x);
			
			
			if( x==4|| x==6||  x==8|| x==10||  x==12)
			{
				srand (time(0));
				resultado= rand()%x+1;
				printf("Voce rolou um dado de %d seu resultado e%d\n",x,resultado);
			}
			
			else 
			printf("Numero de faces invalido use apenas (4, 6, 8, 10, 12 ouo 16)\n E tente novamente\n");
			
			
 system ("Pause");	
	return 0;
}
