
/* O preço final de um produto é calculado somando o valor original com o imposto aplicado. O
imposto corresponde a 10% do valor original, e um desconto fixo de R$5,00 é aplicado após a
adição do imposto.
*/


#include <stdio.h> 
#include <stdlib.h>
 using namespace std;

int main()


{
	
float preco_original,preco_final;

	printf("Introduza o Valor Original do Produto(R$):");
		scanf("%f",&preco_original);

	preco_final= preco_original + (preco_original*0.10)-5;
		
		printf(" Preco do Produto: %.2f\n\n",preco_final);
		

	
	
	
 system ("Pause");	
	return 0;
}
