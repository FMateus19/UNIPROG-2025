/*Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o
resultado..*/

#include <stdio.h> 
#include <stdlib.h>


int main()

{

float A;             

		printf("Digite o valor o numero: ");
			scanf("%f",&A);
		
        
		if(A>=0){
			
			
			printf(" O Dobro: %.2f \n",2*A);
			
		}
		else
		
		
		printf(" O Dobro: %.2f \n",3*A);
	

 system ("Pause");	
	return 0;
}

