/*Implementar um programa que calcula o desconto previdenciário de um funcionário. O programa deve, dado
um salário retornar o valor do desconto proporcional ao mesmo. O cálculo de desconto segue a regra: o
desconto deve 11% do valor do salário. Entretanto, o valor máximo de desconto é 318,20. Sendo assim, ou
o método retorna 11% sobre o salário ou 318,20...*/

#include <stdio.h> 
#include <stdlib.h>


int main()

{

 float a=0,lucro;             

		printf("Digite  o valor de compra: ");
			scanf("%f",&a);
		
		if(a<20.00)
		
			
			 lucro=a*1.45;
			 
		 
		else if((a>=20.00)&&(a<=50.00))
		
	
		lucro=a*1.35;
		
		
		else if(a>50)
		lucro=a*1.25;
		
		
		printf("O valor de venda sera %.2f \n\n",lucro);


			system ("Pause");	
	return 0;
}

