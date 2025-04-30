/*Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que A + C..*/

#include <stdio.h> 
#include <stdlib.h>


int main()

{

float A,B,C;             

		printf("Digite o valor de A: ");
			scanf("%f",&A);
		printf("Digite o valor de B: ");
			scanf("%f",&B);
		printf("Digite o valor de C: ");
			scanf("%f",&C);
        
		if(A+B<A+C){
			
			
			printf(" A+B e menor que A+C \n");
			
		}
		else
		
		
			printf(" A+B e maior que A+C \n");
			
	

 system ("Pause");	
	return 0;
}

