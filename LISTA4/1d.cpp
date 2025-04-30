/*Gerar e escrever os números ímpares do intervalo [25,95] em ordem decrescente.e.*/


#include <stdio.h> 
#include <stdlib.h>


	int main()

{
	int i,x,S=0;
 	float M;


	for (i=1; i<=15 ;i++){
		
		printf("Digite o numero: ");
		scanf("%d",&x);
		S += x;
		}
		M=S /15.0;
	
		printf("S = %d\n", S);
		printf("M = %.2f\n", M);
		
	
			

	

	

 	system ("Pause");	
	return 0;
}

