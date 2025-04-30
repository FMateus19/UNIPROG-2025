/*Gerar e escrever os números ímpares do intervalo [25,95] em ordem decrescente.e.*/


#include <stdio.h> 
#include <stdlib.h>


	int main()

{
	int i=95;

	for (i; i>=25;i--){
		
		if((i % 2)!=0){
			
			printf("%d ",i);
		}
	
			
		}
	

	

 	system ("Pause");	
	return 0;
}

