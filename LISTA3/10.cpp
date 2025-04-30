
/* A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Fazer um
algoritmo que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:
Categoria*/

#include <stdio.h> 
#include <stdlib.h>

int main()
 {
	int idade;
	
	printf("Digite a idade do nadador: ");
	scanf("%d", &idade);
	
	
	 if ((idade >= 5)&&(idade<=7)) {
		printf("Categoria: Infantil A\n");
}
	else if ((idade >= 8)&&(idade<=10)) {
		printf("Categoria: Infantil B\n");
		}
	else if ((idade >= 11)&&(idade<=13)) {
		printf("Categoria: Juvenil A\n");
}
	else if ((idade >= 11)&&(idade<=14)) {
		printf("Categoria: Juvenil B\n");
} 
	else if (idade >= 18) {
		printf("Categoria: Sênior\n");
}
	 
	
	
		
	else {
		printf("Sem categoria. Idade abaixo do mínimo permitido.\n");
		}
return 0;
			
 system ("Pause");	
	return 0;
}
