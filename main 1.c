/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//3-c) Um consultC3rio mC)dico deseja registrar informaC'C5es bC!sicas dos pacientes para futuras consultas.
//O sistema precisa armazenar os seguintes dados de cada paciente, para
//acompanhamento ao longo do tempo: sexo (M ou F), dia, mC*s e ano de nascimento, altura
// (em metros) e peso (em kg).

#include <stdio.h>

int main()


{
	char y1;                    //Y1  o sexo do cliente
	int x,x1,x2;             //X  o dia de nascimento //X1  o mes de nascimento  // X2  o ano de nascimento... do cliente
	float z,z1;          //Z  o peso do cliente, Z1  a altura do cliente.
	char y[90];            //Y  o nome do cliente

      	printf("REGISTRO DE INFORMACOES SOBRE OS CLIENTES\n\n");

	printf("Qual o nome completo do cliente ? - ");
	scanf("%s",&y);
	fflush(stdin);
	printf("Qual o sexo do Cliente (M ou F) ? - ");
	scanf("%s",&y1);
	fflush(stdin);
	printf("Qual seu dia de nascimento ? - ");
	scanf("%i",&x);
	fflush(stdin);
	printf("Qual seu mes de nascimento ? - ");
	scanf("%i",&x1);
	fflush(stdin);
	printf("Qual seu ano de nascimento ? - ");
	scanf("%i",&x2);
	fflush(stdin);
	printf("Qual e o peso em (Kg) do cliente ? - ");
	scanf("%f",&z);
    fflush(stdin);
	printf("Qual e a altura em (m) do cliente ? - ");
	scanf("%i",&z1);
    fflush(stdin);
    
	//Mostrando os Dados armazenados do Cliente.

	printf("Nome: %s \n",y);
	printf("Sexo: %c \n",y1);
	printf("Data de Nascimento: %i /%i /%i  \n",x,x1,x2);
	printf("Peso: %.2f Kg \n",z);
	printf("Altura: %.2f m \n",z1);

	printf("Dados armazenados com sucesso! \n\n");


	return 0;
}