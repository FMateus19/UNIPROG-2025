/*Faça um algoritmo que permita ao aluno calcular a sua média final na Unisinos. Leia a nota do grau A
e do grau B e escreva o resultado na tela. Lembrando que o Grau A vale 1/3 e o Grau B 2/3..*/

#include <stdio.h> 
#include <stdlib.h>


int main()

{
	
float notaA,notaB,notaC,mf=0;
char z;

          printf("Digite a  nota do Grau A: ");
			scanf("%f", &notaA);
		printf("Digite a  nota do Grau B: ");
			scanf("%f", &notaB);
		
mf=(notaA +2*notaB)/3.0;

       if (mf>=6)
	   		{
       	
       	printf("Sua media Final do simestre  e: %.2f 'O Aluno  APROVADO'\n", mf);
	   		}
 		else if(mf<6){
 			printf("Sua media Final do simestre  e: %.2f 'O Aluno ficou em Recuperacao GRAU C'\n\n\n", mf);
 			printf("Deseja substituir GRAU A ou GRAU B ?(Digite 'a' uo 'b)");
 			scanf(" %c",&z);
 			
 			printf("Digite a nota do Grau C: ");
			scanf("%f", &notaC);
		if ((z == 'a' || z == 'A')) 
			{
			mf=(notaC +2*notaB)/3.0;
			} 
		else if (z == 'b' || z == 'B')
		 	{
			mf=(notaA +2*notaC)/3.0;
			} 
		else 
				{
			printf("Opcao invalida. Substituicao nao realizada.\n");
		return 1; 
				}
			printf("Nova media final: %.2f\n", mf);
		if (mf >= 6.0) {
			printf("Aluno aprovado apos Grau C!\n");
} 		else {
			printf("Aluno reprovado.\n");
			}
}
	 
 	
 

 system ("Pause");	
	return 0;
}

