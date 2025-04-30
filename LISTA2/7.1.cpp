/*Um criador de pássaros deseja saber a quantidade de ração diária necessária para alimentar seus
pássaros. Cada pássaro consome 30 gramas de ração por dia. Escreva um programa que leia o número
de pássaros que o criador possui e calcule a quantidade total de ração necessária por dia..*/

#include <stdio.h> 
#include <stdlib.h>


int main()

{
int y1;	
float z; // Z é a quantidade de ração necessária por dia;




          printf("Digite a quantidade de passaros: ");
			scanf("%d",&y1);

			z= y1*30.0;
		printf(" A quantidade de racao necessaria por dia e: %.2f gramas\n\n",z);
		
    


 system ("Pause");	
	return 0;
}

