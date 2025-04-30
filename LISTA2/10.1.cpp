/*O lojista gostou tanto do seu programa anterior que encomendou outro. Dessa vez ele quer que você
calcule quanto cada cliente gastou na loja apenas informando o número de camisetas, calças e cintos
comprados. As camisetas custam R$ 25,00, as calças R$ 100,00 e os cintos R$ 40,00. Some o valor da
compra e ao final dê um desconto de 10 por cento sobre o total. Exiba na tela o valor do desconto e
o valor da compra..*/

#include <stdio.h> 
#include <stdlib.h>


int main()

{
	int x1,x2,x3;
float y1=25.00,y2=100.00,y3=40.00,z1,z2,z3;             // z1 O desconto; z2 o valor aplicadondo desconto, z3 é o valor total

	printf("Digite a quantidade de Camisetas compradas : ");
			scanf("%d",&x1);
	printf("Digite a quantidade de Calcas compradas : ");
			scanf("%d",&x2);
			printf("Digite a quantidade de Cintos compradas : ");
			scanf("%d",&x3);
        
			z1= x1*y1 + x2*y2 + x3*y3;
			z2=z1*0.10;
		
			printf(" O Desconto sera : %.2f R$ \n",z2);	
		printf(" O Valor final da compra : %.2f R$ \n\n",z3=z1-z2);
		
    


 system ("Pause");	
	return 0;
}

