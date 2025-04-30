/*b. Gerar e escrever os números pares do intervalo [20,50]..*/

#include <stdio.h> 
#include <stdlib.h>


	int main()

{
	int i=20;

	for (i; i<=50;i++){
		if(i%2==0){
			printf("%d ",i);
		}
	

	}

 	system ("Pause");	
	return 0;
}

