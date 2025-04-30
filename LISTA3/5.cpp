/*Implementar um programa que calcula o desconto previdenciário de um funcionário. O programa deve, dado
um salário retornar o valor do desconto proporcional ao mesmo. O cálculo de desconto segue a regra: o
desconto deve 11% do valor do salário. Entretanto, o valor máximo de desconto é 318,20. Sendo assim, ou
o método retorna 11% sobre o salário ou 318,20...*/

#include <stdio.h> 
#include <stdlib.h>


int main()

{

 float a,A;             

		printf("Digite  o salario do funcionario R$: ");
			scanf("%f",&A);
			
		a=A*0.11;
		
		if(a>318.20){
			 
			a=318.20;
		}


				printf("O desconto sera de %.2f R$\n",a);
			
 system ("Pause");	
	return 0;
}

