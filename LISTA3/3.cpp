/*Crie um programa que verifica se um número inteiro informado pelo usuário é divisível por 3..*/

#include <stdio.h> 
#include <stdlib.h>


int main()

{

 int A;             

		printf("Digite  o numero: ");
			scanf("%d",&A);
		
        
		if(A%3==0){
			
			
			printf(" O numero %d e divisivel por 3 \n",A);
			
		}
		else
		printf(" O numero %d nao e divisivel por 3 \n",A);
		
	
	

 system ("Pause");	
	return 0;
}

