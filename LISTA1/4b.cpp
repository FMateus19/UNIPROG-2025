
/*Um professor deseja calcular a média ponderada de três notas (n1, n2 e n3). Cada nota possui
um peso específico, representado pelas variáveis p1, p2 e p3.A média ponderada é dada pela
fórmula:*/

#include <stdio.h> 
#include <stdlib.h>


int main()

{	
	
float n1, n2, n3;
float p1, p2, p3;
float media_ponderada=0;

		printf("Digite a primeira nota(n1) :");
			scanf("%f",&n1);
			
		printf("Digite o peso da primeira nota(n1) :");
			scanf("%f",&p1);
			
		printf("Digite a segunda nota(n1) :");
			scanf("%f",&n2);
			
		printf("Digite o peso da segunda nota(n2) :");
			scanf("%f",&p2);
		
		printf("Digite a terceira nota(n3) :");
			scanf("%f",&n3);
			
		printf("Digite o peso da terceira nota(n3) :");
			scanf("%f",&p3);
			
			
			
	media_ponderada= (n1*p1 + n2*p2 + n3*p3)/(p1 + p2 + p3);

	
		printf("Media_Ponderada = %.2f\n\n",media_ponderada);
	
	
 	system("Pause");
	return 0;
}
