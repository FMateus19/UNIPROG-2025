
/* Um consultório médico deseja registrar informações básicas dos pacientes para futuras
consultas. O sistema precisa armazenar os seguintes dados de cada paciente, para
acompanhamento ao longo do tempo: sexo (M ou F), dia, mês e ano de nascimento, altura
(em metros) e peso (em kg).
*/

/*Um consultório médico deseja registrar informações básicas dos pacientes para futuras
consultas. O sistema precisa armazenar os seguintes dados de cada paciente, para
acompanhamento ao longo do tempo: sexo (M ou F), dia, mês e ano de nascimento, altura
(em metros) e peso (em kg).
*/


#include <stdio.h> 
#include <stdlib.h>
 using namespace std;

int main()


{
	
char x[90]; 
char y;
int z,z1,z2;
float y1,y2;

	printf("Introduza o nome do Paciente:");
		scanf("%s",&x);
		fflush(stdin);
	printf("Introduza sexo (M/F) :");
		scanf("%c",&y);
		fflush(stdin);
	printf("Introduza dia de Nascimento:");
		scanf("%d",&z);
		fflush(stdin);
	printf("Introduza Mes de Nascimento(Numero correspondente de 1-12):");
		scanf("%d",&z1);
		fflush(stdin);
	printf("Introduza ano de Nascimento:");
		scanf("%d",&z2);
		fflush(stdin);
	printf("Introduza Altura (m):");
		scanf("%f",&y1);
		fflush(stdin);
	printf("Introduza Peso (kg):");
		scanf("%f",&y2);
		fflush(stdin);
		
		
		printf("\n\nNome do Paciente: %s\n",x);
		printf("Sexo: %c\n",y);
		printf("Data de Nascimento: %d/%d/%d \n",z,z1,z2);
		printf("Altura(m): %.2f\n",y1);
		printf("Peso(kg): %.2f\n\n\n",y2);
		
		
		printf("DADOS GUARDADOS COM SUCESSO!!!");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
 system ("Pause");	
	return 0;
}
