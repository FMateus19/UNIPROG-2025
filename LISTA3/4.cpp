/*Crie um programa que verifica se um número inteiro informado pelo usuário é divisível por 3..*/

#include <stdio.h> 
#include <stdlib.h>


int main()

{

 int A;             

		printf("Digite  o numero: ");
			scanf("%d",&A);
		
        
		if((A%2==0)&&(A!=0)){
			
			
			printf(" O numero %d e par \n",A );
			
		}
		else if (A==0)
		{
			printf("Nada podemos concluir\n\n");
		}
		else{
		printf(" O numero %d e impar \n",A );
		}
	
		
	
	

 system ("Pause");	
	return 0;
}

